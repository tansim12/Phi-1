#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    for (int i = n-1; 0 <= i; i--)
    {
        /* code */
        printf("%d ",arr[i]);
    }
    

    return 0;
}