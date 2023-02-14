#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define ll long long
using namespace std;
vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> arr;int c=0;
        int first=lower_bound(all(nums),target)-nums.begin();
        int second=upper_bound(all(nums),target)-nums.begin();
        if(nums[first]==target)
            arr.push_back(first);
        else
        arr.push_back(-1);
        if(nums[second-1]==target)
        arr.push_back(second-1);
        else
        arr.push_back(-1);
        return arr;

    }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t;
    cin>>t;
    while(t-->0)
    {
        int n,target;
        cin>>n>>target;
        vector<int> nums(n);
        for(int i=0;i<n;i++)
        cin>>nums[i];
        vector<int>resfin=searchRange(nums,target);
        showvec(resfin);
    }
    return 0;
}