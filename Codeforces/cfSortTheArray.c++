#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(n) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define ll long long
#define endl '\n'
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int v[(int)1e5];
    int vOri[(int)1e5];
    rep(n)
        {
            cin>>v[i];
            vOri[i] = v[i];
        }
    sort(v,v+n);
    int count = 0,first = 1,second = 1;
    for(int i =0;i<n;i++)
    {
        if(v[i] != vOri[i])
        {
            count++;
        }
    }
    if(count == 0)
    cout<<"yes\n"<<first<<" "<<second<<endl;
    else
    {
        for(int i =0;i<n;i++)
        {
            if(v[i] != vOri[i])
            {
                first = i+1;
                break;
            }
        }
        for(int i = n-1;i>=0;i--)
        {
            if(v[i]!=vOri[i])
            {
                second = i+1;
                break;
            }
        }
        if(first > second)
        swap(first,second);
        reverse(vOri + first-1,vOri+second);
        int ok = true;
        // for(int i = 0;i<n;i++)
        // cout<<vOri[i]<<" ";
        // cout<<endl;
		for (int i = 0; i < n; i++) {
			if (vOri[i] != v[i]) {
				ok = false;
			}
		}
		if (ok) {
			cout << "yes" << endl;
			cout << first << " " << second << endl;
		} else {
			cout << "no" << endl;
		}
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    // int t;
    // cin>>t;
    // while(t-->0)
    // {
        solve();
    // }
    return 0;
}