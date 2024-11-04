/*------------------------------------------
        Doubly Ended Queue (deque)
-------------------------------------------*/

// insertion and deletion can ve done from both side.


/*
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(200);
    dq.push_back(300);
    dq.push_back(400);
    dq.push_back(500);
    dq.push_back(600);
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    
    dq.pop_back();
    dq.pop_front();
    cout<<dq.back()<<endl;
    cout<<dq.front();
    return 0;
}
*/
#include<iostream>
using namespace std;

// circular deque
class Deque
{
public:
    int *arr;
    int size, front, rear;

    Deque(int size)
    {
        arr = new int[size]{0};
        this->size = size;
        front = rear = -1;
    }

    void pushBack(int val)
    {
        // overflow
        if ((front == 0 && rear == size - 1) || (rear == front - 1))
        {
            cout << "Overflow!"
                 << " Can't push " << val << endl;
            return;
        }
        // empty case -> first element
        else if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[rear] = val;
        }
        // circular nature
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = val;
        }
        // normal case
        else
        {
            rear++;
            arr[rear] = val;
        }
    }

    void pushFront(int val)
    {
        // overflow
        if ((front == 0 && rear == size - 1) || (rear == front - 1))
        {
            cout << "Overflow!"
                 << " Can't push " << val << endl;
            return;
        }
        // empty queue
        if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[front] = val;
        }
        // circular nature
        else if (front -= 0 && rear != size - 1)
        {
            front = size - 1;
            arr[front] = val;
        }
        // normal case
        else
        {
            front--;
            arr[front] = val;
        }
    }

    void popFront()
    {
        // underflow
        if (front == -1 && rear == -1)
        {
            cout << "Underflow" << endl;
            return;
        }
        // single element
        else if (front == rear)
        {
            cout << "Popped: " << arr[front] << endl;
            arr[front] = -1;
            front = rear = -1;
        }
        // circular nature
        else if (front == size - 1)
        {
            cout << "Popped: " << arr[front] << endl;
            arr[front] = -1;
            front = 0;
        }
        // normal case
        else
        {
            cout << "Popped: " << arr[front] << endl;
            arr[front] = -1;
            front++;
        }
    }

    void popBack()
    {
        // underflow
        if (front == -1 && rear == -1)
        {
            cout << "Underflow!" << endl;
            return;
        }
        // single element
        else if (front == rear)
        {
            cout << "Popped: " << arr[rear] << endl;
            arr[rear] = -1;
            front = rear = -1;
        }
        // circular nature
        else if (rear == 0)
        {
            cout << "Popped: " << arr[rear] << endl;
            arr[rear] = -1;
            rear = size - 1;
        }
        // normal case
        else
        {
            cout << "Popped: " << arr[rear] << endl;
            arr[rear] = -1;
            rear--;
        }
    }
};

int main()
{
    return 0;
}













