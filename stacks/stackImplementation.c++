#include<bits/stdc++.h>
using namespace std;
class stack
{
    public:
    int *arr,top,size;
    stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }
    void push(int x)
    {
        if(top == size - 1)
            cout<<"Stack Overflow\n";
        else
            arr[++top] = x;
    }
    void pop()
    {
        if(empty())
            cout<<"Stack Underflow\n";
        else
            top--;
    }
    int peek()
    {
        if(!empty())
            return arr[top];
        else
        {
            cout<<"Stack is Empty\n";
            return -1;
        }
    }
    bool empty()
    {
        if(top==-1)
            return true;
        else 
            return false;
    }
};
int main()
{
    stack st(6);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    if(st.empty())
        cout<<"Empty\n";
    else
        cout<<"Not Empty\n";
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    return 0;
}