#include<iostream>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i];cout<<endl
#define ll long long
using namespace std;
class stack
{
    public:
    int *arr;
    int top;
    int size;
    stack(int size)
    {
        this->size=size;
        top=-1;
        arr=new int[size];
    }
    void push(int x)
    {
        if(size-top>1)
            arr[++top]=x;
        else
        cout<<"StackOverflow\n";
    }
    void pop()
    {
        if(top==-1)
        cout<<"StackUnderflow\n";
        else
        top--;
    }
    int peek()
    {
        if(top>=0 )
        return arr[top];
        else
        {
            cout<<"StackIsEmpty\n";
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
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
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