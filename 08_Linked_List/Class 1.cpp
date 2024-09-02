#include <iostream>
using namespace std;

/*-----------------------------------------
        LINKED LIST
------------------------------------------*/

/*
-> array is a linear data data structure .  array continous memory allocation karata tha. yanhi ki agr mujhe 10 mb ka storage chahiye to physically wo  continous segment me mujhe milna chahiye.
-> in array ,more memory wested.


->when we dont need to continous memory then we can use linked list.
->linked list used for non continous memory allocation.
-> less memory wasted

-> Linked list is collection of nodes.each node have two field 
    1) address field->use to store address of another node.
    2) data field->use to hold data.
    3) Insertion or shift can be done in O(1)
    4)we can change size in run time which is not possible in array or we can dynamcicaly change in linked list.
    class Node{
      int data;
      Node *next;
    }


             ______206    _________312       ______116        
            |             |                 |               |------NULL
  | 24  | 206 |-->| 36  | 312 |-->| 21  | 116 |-->| 44  |      |

  types of linked lsit
  1) singly linked: ek dabbe ke peeche ek dabba,eske peeche ek dabba.
  2)doubly linked list:dabbe ke dono taraf dabba😂
  3)Circular singly linked list:
  3)Circular doubly singly linked list:

*/

class Node{
  public:
  int data;
  Node *next;
  Node(){
    cout<<"I am default constructor :😊😊😊😊😊😊"<<endl;
    this->next=NULL;
  }
  Node(int data){
      cout<<"I am parameterized constructor"<<endl;
    this->data=data;
    this->next=NULL;
  }
};
void printLL(Node *head){
    /*important:👀 kabhi bhi LL ko tranverse krne k liye kabhi bhi original pointer ka use nhi krenge*/
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

int getLength(Node *head){  //node:pass by refrence yaad rkhna bhool jate hai
    int count=0;
    Node *temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

// insert at head
void insertAtHead(Node* &head,Node* &tail,int data){
    // create a node
    Node *newNode=new Node(data);
    // empty LL
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    // attach new head
    newNode->next=head;
    // update head
    head=newNode;
}

// insertAt tail
void insertAtTail(Node* &head,Node* &tail,int data){
    // create a node
    Node *newNode=new Node(data);
    // empty LL
    if(tail==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    // attach new head
    tail->next=newNode;
    // update head
    tail=newNode;
}

// insert at position
void insertAtPosition(Node* &head,Node* &tail,int data,int position){
    int length=getLength(head);
    if(position<=1){
        insertAtHead(head,tail,data);
    }
    else if(position>length){
        insertAtTail(head,tail,data);
    }
    else{
        // middle of linked list
        // step 1:create a new node
        Node* newNode=new Node(data);
        //step 2:tranverse pre/curr to position
        Node* prev=NULL;
        Node* curr=head;
        while(position!=1){
            prev=curr;
            curr=curr->next;
            position--;
        }
        // step 3:attaack prev to new node 
        prev->next=newNode;
        // step 4: attach newnode to curr
        newNode->next=curr;

    }
}


int main() {
  // creation of node
  //static allocation
//   Node a;


  //dynamic allocation
//   Node *node=new Node();

    // Node *first=new Node(10);
    // Node *second=new Node(20);
    // Node *third=new Node(30);
    // Node *forth=new Node(40);
    // first->next=second;
    // second->next=third;
    // third->next=forth;
    // Node *tail=forth;
    
    // Linked list create ho chuki hai

    // Node *head=first;
    // printLL(head);
    // cout<<endl;
    // cout<<"Length of Linked List:"<<getLength(head);

    /*------------------------------------
                Insert node
    ---------------------------------------*/

    // insertAtHead(head,tail,200);
    // insertAtTail(head,tail,500);
    // cout<<getLength(head)<<endl;
    // printLL(head);
    

    Node *head=NULL;
    Node *tail=NULL;
    insertAtHead(head,tail,10);
    insertAtHead(head,tail,49);
    insertAtTail(head,tail,39);
    insertAtHead(head,tail,229);
    insertAtHead(head,tail,329);
    insertAtTail(head,tail,349);

    // printLL(head);

    // insertAtPosition(head,tail,10,3);
    insertAtPosition(head,tail,10,757);
    printLL(head);
  
  return 0;
}