#include<bits/stdc++.h>
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
using namespace std;
int merge(vector<int> &arr,int low,int high,int mid)
{
    vector<int> temp;
    int left = low;
    int right = mid+1;
    int count = 0;
    while(left <= mid and right <= high)
    {
        if(arr[left] < arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            count+=(mid - left + 1);
            right++;
        }
    }

    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low ;i<=high;i++)
    {
        arr[i] = temp[i-low];
    }
    return count;
}

int mergerSort(vector<int> &arr,int low,int high)
{
    int count = 0;
    if(low == high)
        return count;
    int mid = (low + high) / 2;
    count+=mergerSort(arr,low,mid);
    count+=mergerSort(arr,mid+1,high);
    count+=merge(arr,low,high,mid);
    return count;
}

int main()
{
    vector<int> ar = {5,3,2,1,4};
    int n = ar.size();
    cout<<mergerSort(ar,0,n-1)<<endl;
    showvec(ar);
    return 0;
}