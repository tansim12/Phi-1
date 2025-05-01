#include <stdio.h>

int main()
{
    char str[1000001];
    scanf("%s",&str);
    char count[26] = {0};
    for (int i = 0; str[i] != '\0'; i++)
    {
        /* code */
        int value = str[i] -'a';
        count[value]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c : %d\n", i + 'a', count[i]);
        }
    }
    
    
    
    return 0;
}