#include<iostream>
using namespace std;
void traverse(int ar[],int n)
{
    cout<<"Elements are as follows\n";
    for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";
    cout<<endl;
}
void insertAtLast(int ar[],int n)
{
    int index,value;
    cout<<"Enter the value to be inserted\n";
    cin>>value;
    int br[n+1];
    for(int i=0;i<n;i++)
        br[i]=ar[i];
    br[n]=value;
    cout<<"Elements are as follows after operation\n";
    for(int i=0;i<n+1;i++)
        cout<<br[i]<<" ";
    cout<<endl;
}
void deleteFromMiddle(int ar[],int n)
{
    int mid  = n/2;
    int br[n-1];int k=0;
    for(int i=0;i<n;i++)
    {
        if(i == mid)
        continue;
        else
        br[k++] = ar[i];
    }
    cout<<"Elements are as follows after operation\n";
    for(int i=0;i<n-1;i++)
        cout<<br[i]<<" ";
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int ar[n];
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<n;i++)
    cin>>ar[i];
    traverse(ar,n);
    insertAtLast(ar,n);
    deleteFromMiddle(ar,n);
    return 0;
}