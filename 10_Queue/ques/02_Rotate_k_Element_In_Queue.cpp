// ques :Reverse K Element in queue

/*steps 1: push first k element from q to stack
step 2: push all k element from stack to queue
step 3: q me kuch n-k element h jo ki end mme hone chahiye , to inhe pop kro and stack me daaaldo.
*/

// Online C++ compiler to run C++ program online
#include <iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseFirstK(queue<int> &q,int &k){
    int n=q.size();
    stack<int> st;
    if(k>n || k==0){
        return;
    }
    for(int i=0;i<k;i++){
        int element=q.front();
        q.pop();
        st.push(element);
    }
    // push all k into stack
    while(!st.empty()){
        int element=st.top();
        st.pop();
        q.push(element);
    }
    //push and pop n-k back to queue
    for(int i=0;i<(n-k);i++){
        int element=q.front();
        q.pop();
        q.push(element);
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
    reverseFirstK(q,k);
    cout<<"Printitng queue:"<<endl;
    while(!q.empty()){
        int element=q.front();
        cout<<element<<" ";
        q.pop();
    }
    return 0;
}
