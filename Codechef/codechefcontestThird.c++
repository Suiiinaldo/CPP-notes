#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
    cin>>t;
	while(t-->0)
	{
	    int n,k,c=0;string d;
	    cin>>n>>k;
	    string s;
	    cin.sync();
        cin>>s;
        for(int i=0,j=n-1;i<j;i++,j--)
        {
            if(s[i]!=s[j])
            c++;
        }

        if(c<=k)
        {
            if(c%2==1)
            cout<<"YES"<<endl;
            else if((k-c)%2==0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else
        cout<<"NO"<<endl;
	}
	return 0;
}