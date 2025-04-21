#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int num;

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        int value;
        if (num == 0)
        {
            printf("%d ", 0);
        }
      
            while (num != 0)
            {
                value = num % 10;
                printf("%d ", value);
                num = num / 10;
            }
            printf("\n");
        
    }

    return 0;
}