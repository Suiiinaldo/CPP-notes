#include <bits/stdc++.h>
using namespace std;
bool isbalanced(string S)
{
    stack<char> st;
     for(int i=0;i<S.size();i++)
     {
        if(st.empty())
            st.push(S[i]);
        else if((st.top()=='(' && S[i]==')') ||
        (st.top()=='{' && S[i]=='}') || (st.top()=='[' && S[i]==']'))
            st.pop();
        else
            st.push(S[i]);
    }
    if(st.empty())
        return true;
    return false;
}
int main()
{
    string a;
    cin>>a;
    if(isbalanced(a))
        cout<<"balanced"<<endl;
    else
        cout<<"not balanced"<<endl;
}