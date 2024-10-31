// Online C++ compiler to run C++ program online
/*
ques find next min element in an array:
img 1:https://res.cloudinary.com/sameerkhan/image/upload/v1730374587/next_smaller_tkp568.png
img 2:https://res.cloudinary.com/sameerkhan/image/upload/v1730374587/next_smaller_2_oyiuao.png
video:https://res.cloudinary.com/sameerkhan/video/upload/v1730374649/2024-10-31_16-45-59_lpcf6z.mkv
img 3:https://res.cloudinary.com/sameerkhan/image/upload/v1730374586/next_smaller_3_uiwili.png
*/

#include <iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextSmallerElement(int *arr,int size,vector<int>&ans){
    stack<int> st;
    st.push(-1);
    
    for(int i=size-1;i>=0;i--){
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
    ans=nextSmallerElement(arr,size,ans);
    for(auto i:ans){
        cout<<i<<"  ";
    }
    cout<<endl;
    return 0;
}
