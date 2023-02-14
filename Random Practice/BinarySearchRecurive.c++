#include<iostream>
using namespace std;
int binarySearch(int arr[],int start,int end,int target)
{
    int mid = (start + end) / 2;
    if(start > end)
    return -1;
    if(arr[mid] == target)
    return mid;
    if(arr[mid] > target)
    return binarySearch(arr,start,end-1,target);
    if(arr[mid] < target)
    return binarySearch(arr,mid+1,end,target);
}
int main()
{
    cout << "Enter the size of array\n";
    int n;
    cin>>n;
    int ar[n];
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<n;i++)
        cin>>ar[i];
    int element;
    cout<<"Enter the element to be searched\n";
    cin>>element;
    int start=0,end=n,mid;
    int pos=binarySearch(ar,start,end,element);
    if(pos ==-1)
    cout<<"Not Found"<<endl;
    else
    cout<<"Found at index "<<pos<<endl;
}