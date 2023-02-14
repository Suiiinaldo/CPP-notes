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
        arr=new int[size];
        front=rear=-1;
    }
    void push(int x)
    {
        if((front==0 and rear==size-1) or rear==( (front-1)%(size-1) ) )
        cout<<"Queue is Full\n";
        else if(front==-1)
            front=rear=0;
        else if(rear==size-1 and front!=0)
            rear=0;
        else
            rear++;
        arr[rear]=x;
    }
    void pop()
    {
        if(front==-1)
        cout<<"Queue is Empty\n";
        else if(front==rear)
            front=rear=-1;
        else  if(front==size-1)
        front=0;
        else
        front++;
    }
    int peek()
    {
        if(front==-1)
        {
            cout<<"Queue is Empty\n";
            return -1;
        }
        return arr[front];
    }
};
int main()
{
    Queue ob(5);
    ob.push(1);
    ob.push(2);
    ob.push(3);
    ob.push(4);
    ob.push(5);
    ob.pop();
    ob.push(6);
    cout<<ob.peek()<<endl;
    ob.pop();
    cout<<ob.peek()<<endl;
    ob.pop();
    cout<<ob.peek()<<endl;
    ob.pop();
    cout<<ob.peek()<<endl;
    ob.pop();
    cout<<ob.peek()<<endl;
    ob.pop();
    cout<<ob.peek()<<endl;
}