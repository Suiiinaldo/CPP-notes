#include<bits/stdc++.h>
using namespace std;
//Recursive
int getmin(int a[],int i,int j)
{
    if(i==j)
    return i;
    int k = getmin(a,i+1,j);
    return (a[k]<a[i])?k:i;
}
void selectionSortRecur(int a[],int n,int index = 0)
{
    if(index == n)
    return;
    int k= getmin(a,index,n-1);
    int temp = a[k];
    a[k] = a[index];
    a[index] = temp;
    selectionSortRecur(a,n,index+1);
}
int main()
{
    int n, i;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array"<<endl;
    for (i = 0; i < n; i++)
        cin>>a[i];
    selectionSortRecur(a,n);
    printf("Printing the sorted array:\n");
    for (i = 0; i < n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}