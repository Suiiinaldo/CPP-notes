#include<iostream>
using namespace std;
class stack
{
    public:
        int *arr;
        int top;
        int size;
        stack(int size)
        {
            this->size = size;
            arr = new int[size];
            top = -1;
        }
        void push(int x)
        {
            if(top == size-1)
                cout<<"Stack is Full\n";
            else
            {
                top++;
                arr[top] = x;
            }
        }
        void pop()
        {
            if(top == -1)
            {
                cout<<"Stack is Empty\n";
            }
            else
                top--;
        }
        int peek()
        {
            if(top == -1)
            {
                cout<<"Stack is Empty\n";
                return -1;
            }
            return arr[top];
        }

        bool isEmpty()
        {
            if(top == -1)
                return true;
            else
                return false;
        }
};
int main()
{
    int size;
    cout<<"Enter the Size of the Stack\n";
    cin>>size;
    stack ob = stack(size);
    cout<<"Press 1 for Input\n";
    cout<<"Press 2 for Delete\n";
    cout<<"Press 3 for top Element\n";
    cout<<"Press 4 for Exit\n";
    int a;
    abc:
    do{
        cout<<"Enter your Choice\n";
        cin>>a;
        switch(a)
        {
            case 1:
                int x;
                cout<<"Enter the element to be pushed\n";
                cin>>x;
                ob.push(x); break;
            case 2:
                ob.pop(); 
                cout<<"Item deleted Successfully\n";break;
            case 3:
            if(ob.peek() !=-1)
            cout<<"The top element is "<<ob.peek()<<endl; 
            else
            {
                cout<<"\n";
            }
            break;
            case 4: break;
            default: cout<<"Inavlid choice\n";
        }
    }while(a!=4);
}