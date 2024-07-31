#include<iostream>
#include<vector>
using namespace std;
    void rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> ans;
        int n=mat.size();
        int oneCount=INT_MIN;
        int rowNo=-1;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1) count++;

            }
            if(count>oneCount){
                oneCount=count;
                rowNo=i;
            }
        }
        ans.push_back(rowNo);
        ans.push_back(oneCount);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }
    int main(){
        // vector<vector<int>> arr={{0,0,0},{0,1,1}};
        vector<vector<int>> arr={{0,0},{1,1},{0,0}};
        rowAndMaximumOnes(arr);
    }