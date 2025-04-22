#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int value = arr[i];
        if (value >= 10)
        {
            /* code */
            continue;
        }else {
            printf("A[%d] = %d\n",i, value);
        }
        
    }
   

    return 0;
}