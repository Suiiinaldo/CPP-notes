#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
int power(int a,int b)
{
    if(b == 0)
        return 1;
    int hp = power(a,b/2);
    int result = hp * hp;
    hp %= mod;
    if(b & 1)
    {
        result = result * a;
        result%=mod;
    }
    return result;
}
int main()
{
    cout<<"The value of 2^14 is "<<power(2,14)<<endl;
}