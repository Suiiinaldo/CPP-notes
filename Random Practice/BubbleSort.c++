#include<bits/stdc++.h>
using namespace std;
//Recursive
void bubble(int a[],int j,int n)
{
    if(j==n-1)
    return;
    if(a[j]>a[j+1])
    swap(a[j],a[j+1]);
    bubble(a,j+1,n);
}
void BubbleSortRecur(int a[],int n,int index = 0)
{
    if(index == n)
    return;
    bubble(a,0,n);
    BubbleSortRecur(a,n,index+1);
}
//Iterative
void BubbleSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j = 0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            swap(a[j],a[j+1]);
        }
    }
}
int main()
{
    int a[100], n, i;
    printf("Enter number of elements in the array:\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    BubbleSortRecur(a,n);
    printf("Printing the sorted array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}