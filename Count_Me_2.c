#include <stdio.h>
#include <string.h>

int main()
{
    char str[100000];
    scanf("%s", &str);
    int length = strlen(str);
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
        {
            /* code */
            count++;
        }
    }

    printf("%d", count);

    return 0;
}