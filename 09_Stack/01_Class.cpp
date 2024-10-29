/*
STACK:ek esa DS jisme element/items last in first out order ko follow krke rakhi or nikali jati hai.ex undo operation
->underflow:jis case me stack empty ho or hm element remove krna charhe ho , wo hota hai underflow.
->overflow:jis case me stack full ho or hm element add krna chahte hai , use kete hai overflow.
*/

// c++ STL

// 1) Creation:
    #include<stack>
    stack<int>st;
    stack<char> std;
    stack<string>st;
    stack<node> s;
// 2) Insertion
    st.push(4);
// 3)remove:
    st.pop();
// 4) size:
    st.size()
// 5) empty or not:
    st.empty();
// 6) get top element:
    st.top();

/*-------------------------------------------------------------------------
        IMPLEMENT STACK USING ARRAY
---------------------------------------------------------------------------*/

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top;
    Stack(int size){
        arr=new int[size];
        this->size=size;
        this->top=-1;
    }
    
    void push(int data){
        if(top==size-1){
            cout<<"Stack is overflow";
            return;
        }
        top++;
        arr[top]=data;
    }
    
    void pop(){
        if(top==-1){
            cout<<"Stack is underflow"<<endl;
            return ;
        }
        top--;
    }
    
    bool empty(){
        if(top==-1){
            return true;
        }
        return false;
    }
    
    int getTop(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        return arr[top];
    }
    
    int getSize(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        return top+1;
    }
    
    void print(){
        cout<<"Top:"<<top<<endl;
        cout<<"Top element:"<<arr[top]<<endl;
        cout<<"Stack printing:"<<endl;
        int i=0;
        while(i<=top){
            cout<<arr[i]<<" ";
            i++;
        }
        cout<<endl;
    }
    
};
int main() {
    // creation
    Stack st(5);
    
    //push
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.print();
    
    st.push(70);
    
    st.pop();
    st.print();
    
    return 0;
}

// 💪stack means recursion and recursion means stack-> ye line sirf apne liye hai, interview me mt bolna 😂
// let consider ,, if i want to reverse a string, put it into stack and pop and print, this can be done using recursion
