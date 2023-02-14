#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        long long n,x;
        cin>>n>>x;
        if(x==0 )
        {
            cout<<"YES"<<endl;
            cout<<"0 0 "<<n<<endl;
        }
        else if(x/3<=n && x%3==0)
        {
            cout<<"YES"<<endl;
            long long una=n-(x/3);
            cout<<x/3<<" 0 "<<una<<endl;
        }
        else
        {
            long long cor=(x/3)+1;long long una=0;
            long long inc=(cor*3)-x;
            if(inc+cor<n)
            una=n-(inc+cor);
            if(inc+cor+una==n &&(inc>=0 && una>=0 && cor>=0))
            {
                cout<<"YES"<<endl;
                cout<<cor<<" "<<inc<<" "<<una<<endl;
            }
            else
            cout<<"NO"<<endl;
            
        }
    }
}