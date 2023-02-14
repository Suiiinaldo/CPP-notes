#include<bits/stdc++.h>
using namespace std;
vector<int> decompressRLElist(vector<int>& nums)
{
    vector<int> resfin;
    for(int i=0;i<nums.size();i+=2)
        {
            int f=nums[i];
            int val=nums[i+1];
            for(int j=1;j<=f;j++)
            {
                resfin.push_back(val);
            }
        }
    return resfin;
}
int main()
{
    int n;
    cin>>n;
    vector<int> nums;int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        nums.push_back(x);
    }
    vector<int> resfin = decompressRLElist(nums);
    for(int i=0;i<n;i++)
    {
        cout<<resfin[i]<<" ";
    }
}