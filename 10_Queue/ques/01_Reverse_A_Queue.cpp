// Online C++ compiler to run C++ program online
#include <iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue(queue<int> &q){
    stack<int> st;
    while(!q.empty()){
        int Element=q.front();
        q.pop();//pop before push to maintain space complexity
        st.push(Element);
    }
    // one by one print element
    while(!st.empty()){
        int element=st.top();
        q.push(element);
        st.pop();
    }
}

void usingRecursion(queue<int> &q){
    if(q.empty()){
        return;
    }
    int element=q.front();
    q.pop();
    usingRecursion(q);
    q.push(element);
}

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // reverseQueue(q);
    // using recursion
    usingRecursion(q);
    cout<<"Printitng queue:"<<endl;
    while(!q.empty()){
        int element=q.front();
        cout<<element<<" ";
        q.pop();
    }
    return 0;
}
