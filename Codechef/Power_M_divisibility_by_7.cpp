#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0)
	{
	    long long m;
	    string s;
	    cin>>s;
	    cin>>m;
	    int two[5]={1,2,4,8,6};
	    int three[5]={1,3,9,7,1};
	    int seven[5]={1,7,9,3,1};
	    int eight[5]={1,8,4,2,6};
	    int four[3]={1,4,6};
	    int nine[3]={1,9,1};
	    long long res=0;
	    for(int i=0;i<s.length();i++)
	    {
	        int cv=s[i]-'0';
	        if(cv==2)
	        {
	            int po=m%4;
	            if(m==0)
	            po=0;
	            else if(po==0 && m>0)
	            po=4;
	            else
	            po=m%4;
	            res=res*10+two[po];
	        }
	        else if(cv==3)
	        {
	            int po=m%4;
	            if(m==0)
	            po=0;
	            else if(po==0 && m>0)
	            po=4;
	            else
	            po=m%4;
	            res=res*10+three[po];
	        }
	        else if(cv==7)
	        {
	            int po=m%4;
	            if(m==0)
	            po=0;
	            else if(po==0 && m>0)
	            po=4;
	            else
	            po=m%4;
	            res=res*10+seven[po];
	        }
	        else if(cv==8)
	        {
	            int po=m%4;
	            if(m==0)
	            po=0;
	            else if(po==0 && m>0)
	            po=4;
	            else
	            po=m%4;
	            res=res*10+eight[po];
	        }
	        else if(cv==4)
	        {
	            int po=m%2;
	            if(m==0)
	            po=0;
	            else if(po==0 && m>0)
	            po=2;
	            else
	            po=m%4;
	            res=res*10+four[po];
	        }
	        else if(cv==9)
	        {
	            int po=m%2;
	            if(m==0)
	            po=0;
	            else if(po==0 && m>0)
	            po=2;
	            else
	            po=m%4;
	            res=res*10+nine[po];
	        }
	        else
	        {
	            if(m==0)
	            cv=1;
	            res=res*10+cv;
	        }
	        
	    }
	    //cout<<res<<endl;
	    long long zxc=res,cxzv=0;
	    while(zxc!=0)
	    {
	        int r=zxc%10;
	        cxzv=cxzv*10+r;
	        zxc/=10;
	    }
	    if(cxzv%7==0)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}