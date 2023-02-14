#include<bits/stdc++.h>
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
    void insert(int val)
    {
        size+=1;
        int index=size;
        arr[index]=val;
        while(index>1)
        {
            int parent=index/2;
            if(arr[parent]<arr[index])
            {
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else
            {
                return;
            }
        }
    }
    void deletion()//It always deletes the root node and then adjusts accordingly
    {
        if(size==0)
        {
            cout<<"Nothing to delete"<<endl;
            return;
        }
        arr[1]=arr[size];//Step 1 swap the first and last;
        size--;//remove access from last;
        int index=1;
        while(index<size)
        {
            int left=2*index;//for 0 based indexing '2*i+1';
            int right=2*index+1;//for 0 based indexing '2*i+2';
            if(left<=size and arr[index]<arr[left])
            {
                swap(arr[index],arr[left]);
                index=left;
            }
            else if(right<=size and arr[index]<arr[right])
            {
                swap(arr[index],arr[right]);
                index=right;
            }
            else
            {
                return;
            }
        }
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
    void heapsort(int arr[],int n)
    {
        int size=n;
        while(size>1)//1 based indexing else 0
        {
            swap(arr[1],arr[size]);//for 0 put 0
            size--;
            heapify(arr,size,1);
        }
    }
    void print()
    {
        for(int i=0;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    heap h;
    h.insert(4);
    h.insert(5);
    h.insert(6);
    h.insert(7);
    h.insert(8);
    h.print();
    h.deletion();
    h.print();
    for(int i=h.size/2;i>=1;i--)
    {
        h.heapify(h.arr,h.size,i);
    }
    h.print();
    h.heapsort(h.arr,h.size);
    h.print();
    cout<<endl;
}