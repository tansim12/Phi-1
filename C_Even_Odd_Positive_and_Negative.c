#include <stdio.h>

int main()
{
    int n;
    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int num;
        scanf("%d", &num);

        if (num >= 0)
        {
            if (num != 0)
            {
                positive++;
            }

            if (num % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        else
        {
            negative++;
            if (num % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);

    return 0;
}
