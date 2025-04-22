#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        
        scanf("%d",&arr[i]);
    }
    int inputIndex ;
    int inputIndexValue ;
    scanf("%d %d",&inputIndex,&inputIndexValue);
    for (int i = n-1; i >= 0; i--)
    {
    
        arr[inputIndex] =inputIndexValue ;
        printf("%d ",arr[i]);
    
    }
    
    
    return 0;
}