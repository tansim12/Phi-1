#include <stdio.h>

int main()
{
    long long int a, b, c;
    long long int d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    long long int c1 = a + b - c;
    long long int c2 = a - b + c;
    long long int c3 = a + b * c;
    long long int c4 = a * b + c;
    long long int c5 = a * b - c;
    long long int c6 = a - b * c;

    if (c1 == d)
    {
        printf("YES");
    }
    else if (c2 == d)
    {
        printf("YES");
    }else if (c3 == d)
    {
        printf("YES");
    }else if (c4 == d)
    {
        printf("YES");
    }else if (c5 == d)
    {
        printf("YES");
    }else if (c6 == d)
    {
        printf("YES");
    }else {
        printf("NO");
    }

    return 0;
}