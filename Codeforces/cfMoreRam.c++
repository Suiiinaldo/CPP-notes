#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        vector<pair<int,int>>m;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        for(int i=0;i<n;i++)
            m.push_back( make_pair(a[i],b[i]) );
        sort(m.begin(),m.end());
        auto it=m.begin();
        while(it->first<=k and it!=m.end())
        {
            k+=it->second;
            it++;
        }
        cout<<k<<endl;
    }
    return 0;
}