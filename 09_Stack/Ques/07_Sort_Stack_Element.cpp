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

void sortStack(stack<int> &st){
    // base case
    if(st.empty()){
        return;
    }
    int temp=st.top();
    st.pop();
    // 1 case
    sortStack(st);
    
    // backtrack
    insertSorted(st,temp);
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(60); 
    st.push(30);
    st.push(20);
    st.push(50);
    st.push(770);
    sortStack(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    
    return 0;
}

// time complexity: O(n^2)