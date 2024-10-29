//method1: isi stack ko second stack me daaldunga , reverse ho jayega
// method 2: :agr me is stack ko dusre stack me ddaalkr revese krsakta hu, to me ise recursion ke through bhi krsakte hu

// dry run:https://res.cloudinary.com/sameerkhan/image/upload/v1730162326/stack_revese_i6ex7g.png

#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st,int data){
    
    //base case
    if(st.empty()){
        st.push(data);
        return;
    }
    int temp=st.top();
    st.pop();
    insertAtBottom(st,data);
    st.push(temp);
   
}

void reverseStack(stack<int> &st){
    // base case:
    if(st.empty()){
        return;
    }
    // 1 case me dekhunga
    int temp=st.top();
    st.pop();
    
    // recursion call
    reverseStack(st);
    
    // backtrack
    insertAtBottom(st,temp);
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20); 
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    // cout<<"Without reverse"<<endl;
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    // cout<<endl;
    
    reverseStack(st);
    
    
    cout<<"After reverse"<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    
    return 0;
}

// time complexity:O(N^2)