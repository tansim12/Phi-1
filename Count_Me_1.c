#include <stdio.h>

int main()
{
    int tc;
    scanf("%d", &tc);
    int arr[100001];
    for (int i = 0; i < tc; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }

    int count2 = 0;
    int count3 = 0;
    for (int i = 0; i < tc; i++)
    {
        /* code */
        if (arr[i] % 2 == 0 && arr[i] % 3 == 0)
        {
            /* code */
            count2++;
        }
        else if (arr[i] % 2 == 0)
        {
            /* code */
            count2++;
        }
        else if (arr[i] % 3 == 0)
        {
            count3++;
        }
    }
    printf("%d %d",count2,count3);

    return 0;
}