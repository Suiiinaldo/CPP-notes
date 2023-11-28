//She ain't worth your time bro. 


/*-------------------------------ShortCuts-----------------------------------*/       
#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(n) for(int i=0;i<n;i++)
#define repn(i,a,b) for(int i = a;i<b;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i= m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define showset(s) for(auto i=s.begin();i!=s.end();++i) cout<<*i<<" ";cout<<endl;
#define read(a) for(int i = 0;i<a.size();i++)cin>>a[i];
#define read1(a) for(int i = 1;i<a.size();i++)cin>>a[i];
#define ll long long
#define endl '\n'
#define int long long
#define pii pair<int,int>
using namespace std;
vector<bool> primeNumbers;
void SeiveOfEratosthenes(int n);
int gcd(int a, int b);

//x<<y is x*(2^y)
//x>>y is x/(2^y)

/*-------------------------------Let's Do it--------------------------------*/

vector<int> prefix(string s)
{
    int n = s.length();
    vector<int> pre(n,0);
    for(int i = 1;i<n;i++)
    {
        int j = pre[i-1];
        while(j>0 and s[j]!=s[i])
            j = pre[i-1];
        if(s[i] == s[j])
            j++;
        pre[i] = j;
    }
    return pre;
}

void solve()
{
    string s,t;
    cin>>s>>t;
    vector<int> pre = prefix(t);
    int pos = -1;
    int i = 0,j = 0;
    vector<int> res;
    while(i < t.size())
    {
        if(t[i] == s[j])
        {
            j++;i++;
        }
        else
        {
            if(j != 0)
            {
                j = pre[j - 1];

            }
            else
                i++;
        }
        if(j == s.size())
        {
            pos = i - s.size();
            res.push_back(pos);
            j = pre[j - 1];
        }
    }
    showvec(res);
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


/*-----------------------------------WEAPONS------------------------------*/

void SeiveOfEratosthenes(int n)
{
    primeNumbers.assign(n+1,true);
    primeNumbers[0] = primeNumbers[1] = false;
    for(int i = 2;i*i<=n;i++)
    {
        if(primeNumbers[i])
        {
            for(int j = i*i;j <= n;j += i)
                primeNumbers[j] = false;
        }
    }
}

int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}