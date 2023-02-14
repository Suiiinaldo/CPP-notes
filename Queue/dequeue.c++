#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    deque<int> q;
    q.push_back(12);
    q.push_front(14);
    cout<<q.front()<<" "<<q.back()<<endl;
    q.pop_front();
    cout<<q.front()<<" "<<q.back()<<endl;
    q.pop_back();
    if(q.empty())
    {
        cout<<"queue is not empty\n";
    }
    else
    {
        cout<<"Queue is empty\n";
    }
}