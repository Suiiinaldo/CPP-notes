#include<bits/stdc++.h>
#define all(s) s.begin(),s.end()
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int  n;
    cin>>n;cin.ignore();
    vector<string> s(n);
    for(int i=0;i<n;i++)
    cin>>s[i];
    int c=0,z=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        c++;
        else
        {z=max(z,c);c=0;}
    }
    cout<<z<<endl;

}