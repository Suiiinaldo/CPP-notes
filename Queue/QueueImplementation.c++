#include<iostream>
using namespace std;
class Queue
{
    public:
    int size,front,rear;
    int *arr;
    Queue(int size)
    {
        this->size=size;
        front = 0;
        rear=0;
        arr=new int[size];
    }
    void push(int x)
    {
        if(rear==size)
        cout<<"Queue is Full\n";
        else
        {
            arr[rear]=x;
            rear++;
        }
    }
    bool Empty()
    {
        if(front==rear)
        return true;
        else
        return false;
    }
    void pop()
    {
        if(front==rear)
        cout<<"Queue is Empty\n";
        else
        {
            arr[front]=-1;
            front++;
            if(front==rear)
            {
                front =0;
                rear=0;
            }
        }
    }
    int peek()
    {
        if(front==rear)
        cout<<"Queue is Empty\n";
        else
        return arr[front];
    }
};
int main()
{
    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    cout<<q.Empty()<<endl;
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    q.pop();
}