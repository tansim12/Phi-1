#include <stdio.h>

int main()
{

    //* normal loop
    // int a = 1;
    // int b = 5;
    // while (a < b)
    // {
    //     // printf("%d\n", b);
    //     a++;
    //     printf("while =>%d\n", a);
    // }

    // for (size_t i = 0; i <= 10; ++i)
    // {
    //     /* code */
    //     a++;
    //     printf("for => %d\n", a);
    // }

    // do
    // {
    //     /* code */
    //     a++;
    //     printf("do =>%d\n", a);

    // } while (a>b);

    // * Dynamic loop
    int num;
    int total;
    scanf("%d", &num);

    for (size_t i = 1; i <= num; i++)
    {
        /* code */
        total += i;
    }
    printf("total => %d", total);

    return 0;
}
