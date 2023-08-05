#include<bits/stdc++.h>
#define showvec(v) for(auto it : v) cout<<it<<' ';cout<<endl
using namespace std;

int pivotIndex(vector<int> &arr,int low,int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j)
    {
        while(arr[i] <= pivot and i < high)
            i++;
        while(arr[j] > pivot and j > low)
            j--;
        if(i < j)
            swap(arr[i],arr[j]);
    }
    swap(arr[j],arr[low]);
    return j;
}

void quickSort(vector<int> &arr,int low,int high)
{
    if(low >= high) return;
    int p = pivotIndex(arr,low,high);
    quickSort(arr,low,p-1);
    quickSort(arr,p+1,high);
}

int main()
{
    vector<int> v = {3,1,2,4,1,5,2,6,4};
    int n = 9;
    quickSort(v,0,n-1);
    showvec(v);
}