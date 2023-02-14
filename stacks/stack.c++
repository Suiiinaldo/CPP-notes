#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> stack;
    vector<char>v;
    for(char i='a';i<='e';i++)
    {
        stack.push(i);
        v.push_back(i);
    }
    int it=find(v.begin(),v.end(),'d')-v.begin();
    cout<<it+1<<endl;
    for(auto i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<"\n";
    for(int i=0;i<5;i++)
    {
        cout<<stack.top()<<" ";
        stack.pop();
    }
}