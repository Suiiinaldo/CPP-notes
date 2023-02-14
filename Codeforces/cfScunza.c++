#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define ll long long
#define int long long
#define endl '\n'
using namespace std;
vector<long long> nextLargerElement(vector<int> &power,int n)
{
    vector<long long> resu;
    stack<long long> st;
    for (long long i = n - 1; i >= 0; i--)
    {
        if (st.size() == 0)
            resu.push_back(-1);
        else if (st.size() > 0 && st.top() > power[i])
        {
            resu.push_back(st.top());
        }
        else if (st.size() > 0 && st.top() <= power[i])
        {
            while (st.size() > 0 && st.top() <= power[i])
            {
                st.pop();
            }
            if (st.size() == 0)
                resu.push_back(-1);
            else
                resu.push_back(st.top());
        }
        st.push(power[i]);
    }
    reverse(resu.begin(), resu.end());
    return resu;
}
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> stair(n);
    vector<int> power(m);
    vector<int> answer(n);
    for(int i = 0;i<n;i++)
        cin>>stair[i];
    for(int j =0;j<m;j++)
        cin>>power[j];
    answer[0] = stair[0];
    for(int i=1;i<n;i++)
        answer[i] = stair[i]+answer[i-1];
    vector<int> resd = nextLargerElement(power,m);
    // showvec(resd);
    vector<int> resfin;
    int count = 0;int zx = 0;
    for(int i=0;i<m;i++)
    {
        if(resd[i] == -1)
        resfin.push_back(answer[n-1]);
        else if(resd[i]>answer[zx++])
        {
            resfin.push_back(answer[zx-1]);
        }
        else
        resfin.push_back(0);
    }
    showvec(resfin);
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t;
    cin>>t;
    while(t-->0)
    {
        solve();
    }
    return 0;
}