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
    int min =arr[0];
    int max =arr[0];
    int minIndex;
    int maxIndex;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (min >= arr[i])
        {
            /* code */
            min=arr[i];
            minIndex=i;
            
        }
        if (max <= arr[i])
        {
            /* code */
            max=arr[i];
            maxIndex=i;
        }
        
    }
    arr[minIndex]=max;
    arr[maxIndex]=min;

    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d ",arr[i]);
    }    
    
    return 0;
}