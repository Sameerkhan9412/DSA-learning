// Online C++ compiler to run C++ program online
/*
ques find prev min element in an array:
*/

#include <iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> prevSmallerElement(int *arr,int size,vector<int>&ans){
    stack<int> st;
    st.push(-1);
    
    for(int i=0;i<size;i++){
        int curr=arr[i];
        // answer find kro curr ke liye;
        while(st.top()>=curr){
            st.pop();
        }
        ans[i]=st.top();
        st.push(curr);
        
    }
    return ans;
}

int main() {
    // Write C++ code here
    int arr[5]={8,4,6,2,3};
    int size=5;
    vector<int>ans(size);
    ans=prevSmallerElement(arr,size,ans);
    for(auto i:ans){
        cout<<i<<"  ";
    }
    cout<<endl;
    return 0;
}
