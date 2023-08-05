#include<bits/stdc++.h>
using namespace std;

int subsequence(int i,int ar[],int n,int s,int sum)
{
    if(s > sum)
    return 0;
    if(i == n)
    {
        if(s == sum)
        {
            return 1;
        }
        else
        return 0;
    }
    s+=ar[i];
    int left =  subsequence(i+1,ar,n,s,sum);

    s-=ar[i];
    int right =  subsequence(i+1,ar,n,s,sum);

    return left + right;
}

int main()
{
    int n = 8;
    int ar[] = {1,2,3,4,5,6,2,1};
    int sum = 5;
    cout<<subsequence(0,ar,n,0,sum);
}