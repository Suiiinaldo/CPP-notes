#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin>>n;
    string s;
    cin>>s;
    s.erase(unique(s.begin(),s.end()),s.end());
    cout<<n-s.size()<<endl;
}