#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int first = n % 10;
    int last = n / 10;
    if (first % last == 0)
    {
        printf("YES");
    }
    else if (last % first == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}