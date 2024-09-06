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
    Node* prev;
    Node* next;
    
    Node(){
        this->prev=NULL;
        this->next=NULL;
    }
    
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

int findLength(Node* head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
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
        newNode->next=head;
        head->prev=newNode;
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
        tail->next=newNode;
        newNode->prev=tail;
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
                currNode=currNode->next;
            }
            // step 3:pointer update krte hai
            prevNode->next=newNode;
            newNode->prev=prevNode;
            newNode->next=currNode;
            currNode->prev=newNode;
        }
    }
}

// Delete  Node
void deleteNode(Node* &head,Node* &tail,int position){
    if(head==NULL){
        // LL is empty
        cout<<"Connot Delete";
        return;
    }
    if(head==tail){
        Node* temp=head;
        delete temp;
        head=NULL;
        tail=NULL;
    }
    int len=findLength(head);
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        head->prev=NULL;
        delete temp;
    }
    else if(position==len){
        // delte from tail
        Node* prevNode=tail->prev;
        prevNode->next=NULL;
        tail->prev=NULL;
        delete tail;
        tail=prevNode;
    }
    else{
        // delete from middle
        // step 1:set prevNode/currNode/nextNode
        Node *prevNode=NULL;
        Node*currNode=head;
        while(position!=1){
            position--;
            prevNode=currNode;
            currNode=currNode->next;
        }
        Node* nextNode=currNode->next;   
        prevNode->next=nextNode;
        currNode->prev=NULL;
        currNode->next=NULL;
        nextNode->prev=prevNode;
        delete currNode;
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
    // insertAtMiddle(head,tail,2000,7);
    print(head);
    
    // testing deletion
    // deleteNode(head,tail,1);
    deleteNode(head,tail,6);
    print(head);  
    return 0;
}

