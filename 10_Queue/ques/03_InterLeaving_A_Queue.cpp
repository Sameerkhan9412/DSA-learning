
/*  quess : interleaving 
    intput: 10 20 30 40 50 60
    output: 10 40 20 50 30 60   */
#include <iostream>
#include<queue>
#include<stack>
using namespace std;

void interLeaveQueue(queue<int> &first){
    queue<int>second;
    // push first healf to second queue
    int n=first.size();
    for(int i=0;i<n/2;i++){
        int temp=first.front();
        first.pop();
        second.push(temp);
    }
    
    //merge both the half
    // into the orignal queue
    for(int i=0;i<n/2;i++){
        int temp=second.front();
        second.pop();
        first.push(temp);
        temp=first.front();
        first.pop();
        first.push(temp);
    }
}
// time complexity:O(n)
int main() {
    queue<int> q;
    int k=3;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    interLeaveQueue(q);
    cout<<"Printitng queue:"<<endl;
    while(!q.empty()){
        int element=q.front();
        cout<<element<<" ";
        q.pop();
    }
    return 0;
}
