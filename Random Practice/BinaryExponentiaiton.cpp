#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;

int power(int a,int b)
{
    int ans = 1;
    while(b)
    {
        if(b % 2 !=0)
        {
            ans = a*ans;
            ans%=mod;
        }
        a= a * a;
        a%=mod;
        b = b >> 1;
    }
    return ans;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<power(a,b)<<endl;
}