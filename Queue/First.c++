#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(4);
    cout<<"Size = : "<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    bool zxc=q.empty();
    cout<<zxc<<endl;
    cout<<q.front()<<endl;
    q.pop();
    zxc=q.empty();
    cout<<zxc<<endl;
}