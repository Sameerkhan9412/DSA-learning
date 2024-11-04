/*----------------------------------------
        QUEUE
----------------------------------------
Queue-> queue is a data sctrucutre in which elements are arranged in FIFO (first in first out). it follows fifo ordering.
*/

/*#include<iostream>
#include<queue>
using namespace std;
int main(){
    // creation
    queue<int> q;
    // size
    cout<<"Size of queue:"<<q.size()<<endl;
    
    // empty
    if(q.empty()){
        cout<<"Queue is empty" <<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }
    
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    cout<<"the size of quueue :"<<q.size()<<endl;
    
    q.pop();
    cout<<"the size:"<<q.size()<<endl;
    cout<<"first element"<<q.front()<<endl;
    cout<<"last/back/rear element:"<<q.back()<<endl;
    
    return 0;
}/*

/*-------------------------------------------
        IMPLEMENT QUEUE FROM STRATCH USING ARRAY
--------------------------------------------*/

#include<iostream>
using namespace std;
class Queue{
    public:
    int *arr;
    int front;
    int rear;
    int size;
    
    Queue(int size){
        arr=new int(size);
        this->size=size;
        front=-1;
        rear=-1;
    }
    
    void push(int data){
        if(rear==size-1){
            cout<<"Queue is overflow"<<endl;
            return;
        }
        if((rear==-1) &&(front==-1)){
            front++;
        }
        rear++;
        arr[rear]=data;
    }
    
    void pop(){
        if(front==-1 && rear==-1){
            cout<<"Queue is underflow"<<endl;
            return;
        }
        if(front==rear){
            arr[rear]=-1;
            front=-1;
            rear=-1;
            return;
        }
        arr[front]=-1;
        front++;
    }
    
    bool isEmpty(){
        if(front==-1 && rear==-1){
            return true;
        }
        return false;
    }
    
    int getLength(){
        int len;
        if(front==-1 && rear==-1){
            return -1;
        }
        len=rear-front+1;
        return len;
    }
    
    int getFront(){
        if(front==-1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front]; 
    }
    
    void print(){
        cout<<"Printing queue:"<<endl;
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
    
};
int main(){
    Queue q(5);
    q.print();
    
    q.push(200);
    q.push(300);
    q.push(400);
    q.push(500);
    q.push(600);
    q.push(480);
    q.print();
    cout<<"size :"<<q.getLength()<<endl;
    if(q.isEmpty()){
        cout<<"Q is empty"<<endl;
    }
    else{
        cout<<"Q is not empty"<<endl;
    }
    cout<<"front element:"<<q.getFront()<<endl;
    return 0;
}









