#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }

    int count[m+1];
    for (int i = 0; i < m+1; i++)
    {
        /* code */
        count[i]=0;
    }
    
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
        
    }
    for (int i = 1; i <= m; i++)
    {
        /* code */
        printf("%d\n",count[i]);
    }
    
    
    return 0;
}