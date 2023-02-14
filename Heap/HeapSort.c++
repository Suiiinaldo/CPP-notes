#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i);
void HeapSort(int arr[],int n)
{
    int size=n;
    while(size>0)//1 based indexing else 0
    {
        swap(arr[0],arr[size]);//for 0 put 0
        size--;
        heapify(arr,size,0);
    }
}
void heapify(int arr[],int n,int i)
{
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n and arr[largest]<arr[left])//for 0 based indexing '<n';
    {
        largest=left;
    }
    if(right<n and arr[largest]<arr[right])//for 0 based indexing '<n';
    {
        largest=right;
    }
    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
int main()
{
    int arr[]={5,4,3,2,1};
    HeapSort(arr,4);
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
