#include<iostream>
using namespace std;
//Recursive....
void insert(int a[],int i)
{
    if(i==0)
    return;
    if(a[i]<a[i-1])
    {
        swap(a[i],a[i-1]);
        insert(a,i-1);
    }
}
void insertionSortRecur(int a[],int n)
{
    if(n<=1)
    return;
    insertionSortRecur(a,n-1);
    insert(a,n-1);
}
//Iterative
void insertionSort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key = a[i];
        int j=i-1;
        while(j>=0 and a[j]>key)
        {
            a[j+1] = a[j];
            j-=1;
        }
        a[j+1]=key;
    }
}
void swap(int &a,int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}
int main()
{
    int n, i;
    printf("Enter number of elements in the array:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    insertionSort(a,n);
    printf("Printing the sorted array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}