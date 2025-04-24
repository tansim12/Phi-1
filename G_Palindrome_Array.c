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
    int firstIndex = 0;
    int lastIndex = n-1;
    int value = 0;
    while (firstIndex<=lastIndex)
    {
        if (arr[firstIndex] != arr[lastIndex])
        {
            /* code */
            value=1;
        }
        firstIndex++;
        lastIndex--;
        
    }
    if (value == 1)
    {
        printf("NO");
        /* code */
    }else {
        printf("YES");

    }
    
    return 0;
}