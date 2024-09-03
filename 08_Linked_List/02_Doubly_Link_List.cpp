// ---------------------------------------------
//         DOUBLY LINKED LIST
// -----------------------------------------
/*
-> YAHAN PR 3 divison hoti hai,
1) prevNodeNode node ke pointer ko dikhati hai
2)data ko darshati hai
3) next node ke pointer ko drshati hai*/


#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node* prevNode;
    Node* nextNode;
    
    Node(){
        this->prevNode=NULL;
        this->nextNode=NULL;
    }
    
    Node(int data){
        this->data=data;
        this->prevNode=NULL;
        this->nextNode=NULL;
    }
};

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->nextNode;
    }
    cout<<endl;
}

int findLength(Node* head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->nextNode;
    }
    return len;
}

void insertAtHead(Node* &head,Node* &tail,int data){    //& lagana mt bhulna🤣
    // LINKED LIST EMPTY
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }
    else{
        // LLL is not empty
        Node* newNode=new Node(data);
        newNode->nextNode=head;
        head->prevNode=newNode;
        head=newNode;
    }
}

void insertAtTail(Node* &head,Node* &tail,int data){
    if(tail==NULL){
        Node *newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }
    else{
        // LL is not empty
        Node *newNode=new Node(data);
        tail->nextNode=newNode;
        newNode->prevNode=tail;
        tail=newNode;
    }
}
// Insert at middle
void insertAtMiddle(Node* &head,Node* &tail,int data,int position){
    if(head==NULL){
        Node *newNode =new Node(data);
        head=newNode;
        tail=newNode;
    }
    else{
        int len=findLength(head);
        if(position==1){
            insertAtHead(head,tail,data);
        }
        else if(position==len+1){
            insertAtTail(head,tail,data);
        }
        else{
            // insert at middle
            // step 1:create node
            Node *newNode=new Node(data);
            // step2:set prevNode and curren pinter
            Node* prevNode=NULL;
            Node* currNode=head;
            while(position!=1){
                position--;
                prevNode=currNode;
                currNode=currNode->nextNode;
            }
            // step 3:pointer update krte hai
            prevNode->nextNode=newNode;
            newNode->prevNode=prevNode;
            newNode->nextNode=currNode;
            currNode->prevNode=newNode;
        }
    }
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    insertAtHead(head,tail,40); 
    insertAtHead(head,tail,30); 
    insertAtHead(head,tail,20); 
    insertAtHead(head,tail,10); 
    insertAtHead(head,tail,160);
    print(head);
    insertAtTail(head,tail,1000);
    print(head);
    // insertAtMiddle(head,tail,2000,1);
    // insertAtMiddle(head,tail,2000,2);
    // insertAtMiddle(head,tail,2000,3);
    insertAtMiddle(head,tail,2000,7);
    print(head);
    
    return 0;
}


