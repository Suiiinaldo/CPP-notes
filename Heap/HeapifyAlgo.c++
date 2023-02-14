#include<iostream>
using namespace std;
class heap
{
    public:
    int arr[100];
    int size;
    heap()
    {
        arr[0]=-1;//1 base indexing
        size=0;
    }
    void heapify(int arr[],int n,int i)
    {
        int largest=i;
        int left=2*i;//for 0 based indexing '2*i+1';
        int right=2*i+1;//for 0 based indexing '2*i+2';
        if(left<=n and arr[largest]<arr[left])//for 0 based indexing '<n';
        {
            largest=left;
        }
        if(right<=n and arr[largest]<arr[right])//for 0 based indexing '<n';
        {
            largest=right;
        }
        if(largest!=i)
        {
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }
    }
};
