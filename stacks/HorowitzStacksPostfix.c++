#include<bits/stdc++.h>
using namespace std;
int order(char a)
{
    if(a=='^')
    return 3;
    else if(a=='*'||a=='/' || a=='%')
    return 2;
    else if(a=='+'||a=='-')
    return 1;
    else
    return -1;
}
int main()
{
    string s;
    cin>>s;
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        char c=s[i];
        if( (c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' and c<='9') )
        cout<<c;
        else if(c==')')
        {
            while(st.top()!='(')
            {
                cout<<st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while(!st.empty() && order(c)<=order(st.top()))
            {
                cout<<st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
}