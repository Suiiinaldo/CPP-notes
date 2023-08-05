#include<bits/stdc++.h>
using namespace std;

void subsequence(int i, vector<int> &ds,int ar[],int n,int s,int sum)
{
    if(i==n)
    {
        if(s == sum)
        {
            for(auto it : ds)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    ds.push_back(ar[i]);
    s+=ar[i];
    subsequence(i+1,ds,ar,n,s,sum);
    ds.pop_back();
    s-=ar[i];
    subsequence(i+1,ds,ar,n,s,sum);
}

int main()
{
    int n = 8;
    int ar[] = {1,2,3,4,5,6,2,1};
    vector<int> ds;
    int sum = 5;
    subsequence(0,ds,ar,n,0,sum);
}