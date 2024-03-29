#include <stdio.h>
using namespace std;
void merge_sort(int i, int j, int a[], int aux[])
{
    if (j <= i)
    {
        return;
    }
    int mid = (i + j) / 2;
    merge_sort(i, mid, a, aux);
    merge_sort(mid + 1, j, a, aux);
    int left = i;
    int right = mid + 1;
    int k;
    for (k = i; k <= j; k++)
    {
        if (left == mid + 1)
        {
            aux[k] = a[right];
            right++;
        }
        else if (right == j + 1)
        {
            aux[k] = a[left];
            left++;
        }
        else if (a[left] < a[right])
        {
            aux[k] = a[left];
            left++;
        }
        else
        {
            aux[k] = a[right];
            right++;
        }
    }
    for (k = i; k <= j; k++)
    {
        a[k] = aux[k];
    }
}
int main()
{
    int a[100], aux[100], n, i, d, swap;
    printf("Enter number of elements in the array:\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    merge_sort(0, n - 1, a, aux);
    printf("Printing the sorted array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
