#include<iostream>
using namespace std;
class dequ
{
    public:
    int size;int front,rear;
    int *arr;
    dequ(int size)
    {
        this->size=size;
        front=rear=-1;
        arr=new int[size];
    }
    bool push_back(int n)
    {
        if(isFull())
        {
            cout<<"Queue is Full\n";
            return false;
        }
        else if(rear == size-1 and front!=0)
        rear=0;
        else if(isEmpty())
        front=rear=0;
        else
        rear++;
        arr[rear]=n;
        return true;
    }
    bool push_front(int x)
    {
        if(isFull())
        {
            cout<<"Queue is Full\n";
            return false;
        }
        else if(isEmpty())
        front=rear=0;
        else if(front==0 and rear!=size-1)
        front=size-1;
        else
        front--;
        arr[front]=x;
        return true;
    }
    int pop_back()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty\n";
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if(front==rear)
            front=rear=-1;
        else  if(rear==0)
        rear=size-1;
        else
        rear--;
        return ans;
    }
    int pop_front()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty\n";
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;

        if(front==rear)
            front=rear=-1;
        else  if(front==size-1)
        front=0;
        else
        front++;
        return ans;
    }
    bool isFull()
    {
        if((front==0 and rear== size-1)||(front != 0 and (front-1)%size-1==rear))
        return true;
        else
        return false;
    }
    bool isEmpty()
    {
        if(front == -1)
        return true;
        else
        return false;
    }
    int Front()
    {
        if(isEmpty())
        {
            return -1;
        }
        return arr[front];
    }
    int back()
    {
        if(isEmpty())
        {
            return -1;
        }
        return arr[rear];
    }
};
int main()
{
    dequ q(5);
    q.push_front(1);
    q.push_back(2);
    cout<<q.Front()<<endl;
    cout<<q.back()<<endl;
}