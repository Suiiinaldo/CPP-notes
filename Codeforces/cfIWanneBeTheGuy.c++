#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;int zxc=n*(n+1)/2,cxz=0;
    int p,q,k=0;
    cin>>p;
    vector<int> fin;
    for(int i=0;i<p;i++)
    {
        int x;
        cin>>x;fin.push_back(x);
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int x;
        cin>>x;fin.push_back(x);
    }
    sort(fin.begin(),fin.end());
    fin.erase(unique(fin.begin(),fin.end()),fin.end());
    cxz=accumulate(fin.begin(),fin.end(),cxz);
    if(zxc==cxz)
    cout<<"I become the guy.";
    else
    cout<<"Oh, my keyboard!";
}