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
        if (value >=0)
        {
            /* code */
            if (value != 0)
            {
                arr[i]=1;
                printf("%d ",arr[i]);
            }else {
                arr[i]=0;
                printf("%d ",arr[i]);
            }
            
        }else {
            arr[i]=2;
            printf("%d ",arr[i]);
        }
        
    }
   
    return 0;
}