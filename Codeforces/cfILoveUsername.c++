#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i];cout<<endl
#define ll long long
using namespace std;
vector<long long> nextLargerElement(vector<long long> arr, int n)
{
    vector<long long> resu;
    stack<long long> st;
    for(int i=0;i<n;i++)
    {
        if (st.size()==0)
        resu.push_back(-1);
        else if(st.size()>0 and st.top()>arr[i])
        resu.push_back(st.top());
        else if(st.size()>0 and st.top()<=arr[i])
        {
            while(st.size()>0 and st.top()<=arr[i])
            st.pop();
            if(st.size()==0)
            resu.push_back(-1);
            else
            resu.push_back(st.top());
        }
        st.push(arr[i]);
    }
    return resu;
}
vector<ll> NextSmallerElement(vector<ll>arr,int n)
{
    vector<ll> res;
    stack<ll>st;
    for(int i=0;i<n;i++)
    {
        if(st.size()==0)
        res.push_back(-1);
        else if(st.size()>0 and st.top()<arr[i])
        res.push_back(st.top());
        else if(st.size()>0 and st.top()>=arr[i])
        {
            while(st.size()>0 and st.top()>=arr[i])
            st.pop();
            if(st.size()==0)
            res.push_back(-1);
            else
            res.push_back(st.top());
        }
        st.push(arr[i]);
    }
    return res;
}
void solve(vector<ll> arr,int n)
{
    vector<ll> small=NextSmallerElement(ar,n);
    vector<ll> greater=nextLargerElement(ar,n);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)
    cin>>ar[i];
    solve(ar,n);
    return 0;
}