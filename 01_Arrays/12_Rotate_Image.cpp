#include<iostream>
#include<vector>
using namespace std;

    void PrintingMatrix(vector<vector<int>>& matrix){
        //Printing Matrix
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                cout<<matrix[i][j]<<"  ";
            }
            cout<<endl;
        }
    }

    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // transpose
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = i; j < matrix[i].size(); j++) {    //is condition ko bht bhoolte hai
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        // reverse 2D matrix
        for (int i = 0; i < matrix.size(); i++) {
            int left = 0;
            int right = matrix[i].size() - 1;
            while (left < right) {
                swap(matrix[i][left], matrix[i][right]);
                left++;
                right--;
            }
        }
        
    }

    int main(){
        vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};

        cout<<"printing before rotate"<<endl;
        PrintingMatrix(arr);

        rotate(arr);

        cout<<"printing after rotate"<<endl;
        PrintingMatrix(arr);

        return 0;
    }
