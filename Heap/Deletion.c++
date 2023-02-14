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
        int i=1;
        while(i<size)
        {
            int left=2*i;//for 0 based indexing '2*i+1';
            int right=2*i+1;//for 0 based indexing '2*i+2';
            if(left<size and arr[i]<arr[left])
            {
                swap(arr[i],arr[left]);
                i=left;
            }
            else if(right<size and arr[i]<arr[right])
            {
                swap(arr[i],arr[right]);
                i=right;
            }
            else
            {
                return;
            }
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
}