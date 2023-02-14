#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(n) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define ll long long
#define endl '\n'
#define int long long
using namespace std;
int n,m;
void prefixSum(vector<int> &v,vector<int> &prefix)
{
    vector<int> res(n);
    res[0] = v[0];
    rep(n)
    {
        if(i)
        {
            res[i] = v[i]+res[i-1];
        }
    }
    prefix = res;
}
void solve()
{
    int n, m;
	cin >> n >> m;
	vector<int> a(n);
	rep(n)
    {
        cin>>a[i];
    }
	int ans = 0;
	priority_queue<int> pq_pref;
	priority_queue<int, vector<int>, greater<int>> pq_suf;
	int cur_sum = 0;
	for(int i = m-1; i > 0; i--){
		cur_sum += a[i];
		if(a[i] > 0) pq_pref.push(a[i]);
		while(cur_sum > 0){
			ans++;
			cur_sum -= 2 * pq_pref.top();
			pq_pref.pop();
		}
	}
	cur_sum = 0;
	for(int i = m; i < n; i++){
		cur_sum += a[i];
		if(a[i] < 0) pq_suf.push(a[i]);
		while(cur_sum < 0){
			ans++;
			cur_sum -= 2 * pq_suf.top();
			pq_suf.pop();
		}
	}
	cout << ans<<endl;
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