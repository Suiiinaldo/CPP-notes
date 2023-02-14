#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char>v;
    v.push_back('a');
    v.push_back('b');
    v.push_back('c');
    v.push_back('d');
    for(auto it : v)
    {
        it =toupper(it);
        cout<<it<<endl;
    }
    cout<<endl;
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}