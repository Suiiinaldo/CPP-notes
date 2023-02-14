#include<bits/stdc++.h>
using namespace std;
int partition(int ar[],int start,int end)
{
    int pivot =ar[start];
    int index_small = start+1;
    int index_big = end;
    while(index_small<=index_big)
    {
        while(ar[index_small]>=pivot)
        {
            index_small++;
        }
        while(ar[index_big]<=pivot)
        {
            index_big--;
        }
        swap(ar[index_small],ar[index_big]);
    }
    swap(ar[pivot],ar[index_small]);
    return index_big;
}
void quickSort(int ar[],int low,int high)
{
    if(low>=high)
    return;
    int pivot = partition(ar,low,high-1);
    quickSort(ar,low,pivot-1);
    quickSort(ar,pivot+1,high);
}
int main()
{
    int a[100], aux[100], n, i, d, swap;
    printf("Enter number of elements in the array:\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    quickSort(a,0,n);
    printf("Printing the sorted array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}