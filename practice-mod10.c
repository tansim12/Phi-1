#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }
    int m;
    scanf("%d", &m);
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        /* code */
        scanf("%d", &arr2[i]);
    }
    
    int arr3[n+m];
    
    for (int i = 0; i < n; i++)
    {
        /* code */
        arr3[i] = arr[i]; 
    }

    for (int i = 0; i < m; i++)
    {
        /* code */
        arr3[i+n]=arr2[i];
    }
    
    for (int i = 0; i < n+m ; i++)
    {
        /* code */
        printf("%d ", arr3[i]);
    }
    
    
    
    return 0;
}