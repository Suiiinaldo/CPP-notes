#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    long long ar[n];
	    for(int i=0;i<n;i++)
	    cin>>ar[i];
	    sort(ar,ar+n);long long s1=0,s2=0;
	    for(int i=0,j=n-1;i<=j;i++,j--)
        {
            s1+=ar[i];
        }
        cout<<s1<<endl;
	}
	return 0;
}
