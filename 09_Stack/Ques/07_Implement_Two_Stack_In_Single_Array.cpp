// implement 2 stack in single array

// image: of solution:https://res.cloudinary.com/sameerkhan/image/upload/v1730276326/SAMEER_KHAN_yiqvzr.png
#include <iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top1;
    int top2;
    
    Stack(int size){
        arr=new int[size];
        this->size=size;
        top1=-1;
        top2=size;
        
    }
    void push1(int data){
        if(top2-top1==1){
            // no space available
            cout<<"Overflow"<<endl;
            return;
        }
        top1++;
        arr[top1]=data;
    }
    void pop1(){
        if(top1==-1){
            cout<<"UNDERFLOW"<<endl;
            return;
        }
        arr[top1]=0;
        top1--;
    }
    void push2(int data){
        if(top2-top1==1){
            // no space available
            cout<<"Overflow"<<endl;
            return;
        }
        top2--;
        arr[top2]=data;
    }
    void pop2(){
        if(top2==size){
            cout<<"UNDERFLOW"<<endl;
            return;
        }
        arr[top2]=0;
        top2--;
    }
    void print(){
        cout<<"Top1="<<top1<<" "<<"Top2= "<<top2<<endl;
        for(int i=0;i<size;i++){
            cout<<endl;
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};  //semi colon lgana bhul jate hai??

int main() {
    // Write C++ code here
    // 1 approach: if i divide whole array in two parts, 1 for stack 1 and 2nd for stack 2, but iska disadvantage yeh ki yahan pr memory wastage jyada hoti hai
    //if interviewrs says ki ek array me 2 stack implement krke dikhai, we can say ki ek treeka yeh and anoother approcah is bbelow
    
    /*approach 2*/
    
    Stack st(5);
    st.print();
    st.push1(10);
    st.print();
    st.print();
    st.push1(20);
    st.print();
    st.push2(70);
    st.print();
    st.print();
    st.push2(89);
    st.print();
    st.push1(49);
    st.print();
    // st.push2(456);//return overfllow
    st.push1(4456);//return overfllow
    
    st.pop1();
    st.print();
    st.pop2();
    st.print();
    
    return 0;
}
