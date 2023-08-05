//She ain't worth your time bro. 


/*-------------------------------ShortCuts-----------------------------------*/       
#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(n) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define showset(s) for(auto i=s.begin();i!=s.end();++i) cout<<*i<<" ";cout<<endl;
#define ll long long
#define endl '\n'
#define int long long
using namespace std;
vector<bool> primeNumbers;
void SeiveOfEratosthenes(int n);
int gcd(int a, int b);

//x<<y is x*(2^y)
//x>>y is x/(2^y)

/*-------------------------------Let's Do it--------------------------------*/


void solve()
{
    int n;
    cin>>n;
    n=n-1;
    vector<int> b(n);
    for(int i = 0;i<n;i++)
    {
    	cin>>b[i];
    }
    showvec(b);
    // vector<int> a;
    // a.push_back(b[0]);
    // for(int i = 0;i < n-1;i++)
    // {
    // 	a.push_back(min(b[i],b[i+1]));
    // }
    // a.push_back(b[n-1]);
    // showvec(a);
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