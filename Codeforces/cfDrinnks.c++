#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double ar[n];double s=0.0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        s+=(ar[i]/100);
    }
    printf("%.12lf",(double)(s/n*100));

}