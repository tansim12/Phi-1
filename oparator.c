#include <stdio.h>
#include <stdbool.h>
int main()
{
    int x;
    int y;

    scanf("%d  %d", &x, &y);

    if (x > y)
    {
        /* code */
        printf("value of x = %d", x);
    }
    else
    {
        printf("value of y = %d", y);
    }

    int num = 10;
    bool c = false;

    int sum = num + c;
    // printf(" sum = %d", sum);

    return 0;
}

