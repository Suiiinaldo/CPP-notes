#include<bits/stdc++.h>
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
using namespace std;
void merge(vector<int> &arr,int low,int high,int mid)
{
    vector<int> temp;
    int left = low;
    int right = mid+1;
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
}

void mergerSort(vector<int> &arr,int low,int high)
{
    if(low == high)
        return;
    int mid = (low + high) / 2;
    mergerSort(arr,low,mid);
    mergerSort(arr,mid+1,high);
    merge(arr,low,high,mid);
}

int main()
{
    vector<int> ar = {3,1,2,4,1,5,2,6,4};
    int n = ar.size();
    mergerSort(ar,0,n-1);
    showvec(ar);
    return 0;
}