#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack<int> &st,int element){
    // base case
    // top empty to nhi hai, chekck krlo, bht log bhoool jta hai
    if(st.empty()||element>st.top()){
        st.push(element);
        return;
    }
    
    // ek case smbhalna hai
    int temp=st.top();
    st.pop();
    
    // recurison dekhlenga
    insertSorted(st,element);
    
    // backtracking
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
    insertSorted(st,45);
    insertSorted(st,65);
    insertSorted(st,32);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    
    return 0;
}