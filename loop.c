#include <stdio.h>

int main()
{
    int a = 1;
    int b = 5;
    while (a < b)
    {
        // printf("%d\n", b);
        a++; 
        printf("%d\n", a);
    }

    for (size_t i = 0; i < 10; ++i)
    {
        /* code */
        a++; 
        printf("for => %d\n", a);
    }
    
    return 0;
}
