#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define ll long long
#define endl '\n'
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int n = s.length();
    stack<char> st;
    string resfin="";
    for(int i=0;i<n;i++)
        {
            if(s[i] == ']')
            {
                string d="";
                while(st.top()!='[')
                {
                    d.push_back(st.top());
                    st.pop();
                }
                // st.pop();
                cout<<st.top()<<" "<<d<<endl;
                cout<<endl;
                reverse(all(d));
                st.pop();
                int b = st.top()-'0';
                for(int i=0;i<b;i++)
                {
                    resfin+=d;
                }
                reverse(all(resfin));
                st.pop();
            }
            else
            st.push(s[i]);
        }
        int last  = st.top()-'0';
        for(int i=0;i<last;i++)
        resfin+=resfin;
        cout<<resfin<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
        solve();
    return 0;
}