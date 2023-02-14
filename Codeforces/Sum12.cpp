//She ain't worth your time bro. 


/*-------------------------------ShortCuts-----------------------------------*/       
#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(n) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define ll long long
#define endl '\n'
#define int long long
using namespace std;
vector<bool> primeNumbers;
void SeiveOfEratosthenes(int n);
int gcd(int a, int b);

/*-------------------------------Let's Do it--------------------------------*/


int sumOfDigits(int n)
{
	int sum = 0;
	while(n!=0)
	{
		int r = n%10;
		sum = sum*10 + r;
		n/=10;
	}
	return sum;
}
void solve()
{
    int n;
    cin>>n;
    if(n & 1)
    {
    	if( (n/2)%10 != 9)
    	cout<<n/2<<' '<<n/2 + 1<<endl;
    	else
    	{
    		vector<int> x;
    		int t = 0;
    		vector<int> y;
    		while(n!=0)
    		{
    			int r = n%10;
    			if(r&1)
    			{
    				x.push_back(r/2 + t);
    				y.push_back(r/2 +(1-t));
    				t = 1-t;
    			}
    			else
    			{
    				x.push_back(r/2);
    				y.push_back(r/2);
    			}
    			n/=10;
    		}
            reverse(all(x));reverse(all(y));
            int first = 0;
            int second = 0;
            for(int i = 0;i<x.size();i++)
            {
                first = first*10 + x[i];
            }
            for(int i = 0;i<y.size();i++)
            {
                second = second*10 + y[i];
            }
            cout<<first<<" "<<second<<endl;
    	}
    }
    else
    {
    	cout<<n/2<<' '<<n/2<<endl;
    }
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