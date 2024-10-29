#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st,int data){
    
    //base case
    if(st.empty()){
        st.push(data);
        cout<<"data inserted successfully: "<<st.top()<<endl;
        return;
    }
    int temp=st.top();
    st.pop();
    insertAtBottom(st,data);
    st.push(temp);
   
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    insertAtBottom(st,200);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}