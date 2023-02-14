#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i];cout<<endl
#define ll long long
using namespace std;
void solve()
{
        string s;
        cin>>s;
        map<char, int> frequency;
        for (char c : s)
            frequency[c]++;
        for (int i = 0; i < s.size(); i++)
            if (--frequency[s[i]] == 0)
            {
                cout << s.substr(i) << "\n";
                break;
            }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t;
    cin>>t;
    cin.ignore();
    while(t-->0)
    {
        solve();
    }
    return 0;
}