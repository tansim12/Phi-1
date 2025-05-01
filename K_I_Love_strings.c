#include <stdio.h>
#include <string.h>

int main()
{
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        char str1[51], str2[51];
        scanf("%s %s", &str1, &str2);
        int length1 = strlen(str1);
        int length2 = strlen(str2);
        int i = 0;
        int j = 0;
        while (i < length1 && j < length2)
        {
            /* code */
            printf("%c%c", str1[i], str2[j]);
            i++;
            j++;
        }
        while (i < length1)
        {
            /* code */
            printf("%c", str1[i]);
            i++;
        }
        while (j < length2)
        {
            /* code */
            printf("%c", str2[j]);
            j++;
        }

        printf("\n");
    }

    return 0;
}