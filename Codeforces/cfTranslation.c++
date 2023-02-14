#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string s,d;
    cin>>s;
    cin>>d;
    reverse(s.begin(),s.end());
    if(s.compare(d)==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}