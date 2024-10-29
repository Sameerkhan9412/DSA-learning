#include<iostream>
#include<stack>
using namespace std;

void findMid(stack<int> &st,int &pos,int &ans){
    if(st.empty()){
        ans=-1;
        cout<<"Stack is empty, no middle element"<<endl;
        return;
    }
    //base case
   if(pos==1){
       ans=st.top();
   }
   else{
       pos--;
       int temp=st.top();
       st.pop();
    //   recursion call
       findMid(st,pos,ans);
    //   Backtracking->because stack k element lost n ho.
       st.push(temp);
   }
}

int main(){
    stack<int> st;
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // st.push(50);
    // st.push(60);
    int size=st.size();
    int pos;
    if(size%2==1){
        pos=size/2+1;
    }
    else{
        pos=size/2;
    }
    int ans;
    findMid(st,pos,ans);
    cout<<ans;
    return 0;
}