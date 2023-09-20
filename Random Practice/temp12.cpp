#include<bits/stdc++.h>
using namespace std;
int f(int n) {
    int moves = 0;
    while(n>0)
    {
        if (ceil((double)sqrt(n)) == floor((double)sqrt(n)) and n!=1)
        {
            n = (int)sqrt(n);
            cout<<n<<" \n";
            moves++;
        }
        else
        {
            n-=1;
            cout<<n<<" \n";
            moves++;
        }
    }
    return moves;
}

int main()
{
    int n;
    cin>>n;
    cout<<f(n)<<endl;
}