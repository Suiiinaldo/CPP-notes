#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    while(k-->0)
    {
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                swap(s[i],s[i+1]);i++;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}