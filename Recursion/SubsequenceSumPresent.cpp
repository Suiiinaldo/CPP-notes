#include<bits/stdc++.h>
using namespace std;

bool subsequence(int i,vector<int> &ds,int ar[],int n,int s,int sum)
{
    if(i == n)
    {
        if(s == sum)
        {
            for(auto it : ds)cout<<it<<' ';cout<<endl;
            return true;
        }
        return false;
    }   
    ds.push_back(ar[i]);
    s+=ar[i];
    if(subsequence(i+1,ds,ar,n,s,sum) == true)
    return true;

    ds.pop_back();
    s-=ar[i];
    if(subsequence(i+1,ds,ar,n,s,sum) == true)
    return true;

    return false;
}

int main()
{
    int n = 8;
    int ar[] = {1,2,3,4,5,6,2,1};
    vector<int> ds;
    int sum = 200;
    if(subsequence(0,ds,ar,n,0,sum) == true)
    cout<<"Present\n";
    else
    cout<<"Not\n";
}