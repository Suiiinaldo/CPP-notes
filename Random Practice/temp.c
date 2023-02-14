#include <stdio.h>
#include<string.h>
int main()
{
   char str[100];char str1[100];
    int t=-1;
    gets(str);
    gets(str1);
    int n=strlen(str);
    int m=strlen(str1);
    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
            if (str[i + j] != str1[j])
                break;
        if (j == m)
        {
            t= i;
            goto abc;
        }
    }
    abc:
    if(t==-1)
    printf("Not Found\n");
    else
    printf("Found at index %d",t);
    return 0;
}