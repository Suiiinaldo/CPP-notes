#include <bits/stdc++.h>
using namespace std;
void solve(string s,int n)
{
        int cnt=0;
    for ( int i=0;i<n;i++)
        if ( s[i]=='1')
            cnt++;
    if ( cnt==0){
        cout<<0<<'\n';
        return;
    }
    for ( int i=0;i<n-1;i++){
        if ( s[i]=='1'&&s[i+1]=='1'){
            cout<<2<<'\n';
            return;
        }
    }
    cout<<1<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        cin.ignore();
        string s;
        cin>>s;
        solve(s,n);
    }
    return 0;
}