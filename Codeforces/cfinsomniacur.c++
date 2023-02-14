#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
        vector<int>v;int c=0;
        for(int i=1;i<=d;i++)
            v.push_back(i);
        for(int i=0;i<v.size();i++)
        {
            if(v[i]%k==0 ||v[i]%l==0 ||v[i]%m==0 ||v[i]%n==0 )
            c++;
        }
        cout<<c<<endl;
}