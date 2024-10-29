#include<iostream>
#include<stack>
using namespace std;

void findMid(stack<int> &st,int &pos){
    if(st.empty()){
        cout<<"Stack is empty, no middle element";
        return;
    }
    //base case
   if(pos==1){
       cout<<"Deleted :"<<st.top();
       st.pop();
   }
   else{
       pos--;
       int temp=st.top();
       st.pop();
    //   recursion call
       findMid(st,pos);
    //   Backtracking->because stack k element lost n ho.
       st.push(temp);
   }
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    int size=st.size();
    int pos;
    if(size%2==1){
        pos=size/2+1;
    }
    else{
        pos=size/2;
    }
    findMid(st,pos);
    return 0;
}