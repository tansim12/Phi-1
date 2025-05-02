#include <stdio.h>
#include <string.h>

int main()
{
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        /* code */
        char str[10000];
        scanf("%s", &str);
        int length = strlen(str);
        int capitalCount = 0;
        int smallCount = 0;
        int digitCount = 0;
        for (int i = 0; i < length; i++)
        {
            /* code */
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                /* code */
                capitalCount++;
            }
            else if (str[i] >= 'a' && str[i] <= 'z')
            {
                /* code */
                smallCount++;
            }
            else if (str[i] >= '0' && str[i] <= '9')
            {
                digitCount++;
            }
        }
        printf("%d %d %d\n",capitalCount,smallCount,digitCount);
    }


    return 0;
}