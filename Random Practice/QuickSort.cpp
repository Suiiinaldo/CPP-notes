#include<bits/stdc++.h>
#define showvec(v) for(auto it : v) cout<<it<<" ";cout<<endl
using namespace std;
int pivotIndex(vector<int> &arr,int low,int high)
{
    int i = low;
    int j = high;
    int pivot = arr[low];
    while(i < j)
    {
        while(arr[i] <=pivot and i < high)
            i++;
        while(arr[j] > pivot and j > low)
            j--;
        if(i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[j], arr[low]);
    return j;
}
void quicksort(vector<int> &arr,int low,int high)
{
    if(low >= high)
        return;
    int p = pivotIndex(arr,low,high);
    quicksort(arr,low,p-1);
    quicksort(arr,p+1, high);
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++)
        cin>>v[i];
    cout<<"Unsorted array is : ";
    showvec(v);
    quicksort(v,0,n-1);
    cout<<"Sorted Array is : ";
    showvec(v);
    return 0;
}