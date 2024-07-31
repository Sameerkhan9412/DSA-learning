#include<iostream>
#include<vector>
using namespace std;
void MissingNumber(vector<int> &arr){
    int n=arr.size();
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    int totalSum=((n)*(n+1))/2;
    cout<<totalSum-sum;
    
}
int main(){
    vector<int> arr={3,0,1};  
    MissingNumber(arr);
    return 0;
}