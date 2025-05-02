#include <stdio.h>
#include <string.h>


int main()
{
    char str[10000];
    scanf("%s",&str);
    int length = strlen(str);
    int countingArr[26] = {0};

    for (int i = 0; i < length; i++)
    {
        /* code */
        countingArr[str[i]-'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        /* code */
        if (countingArr[i]>0)
        {
            /* code */
            printf("%c - %d\n",i+'a',countingArr[i]);
        }
        
    }
    
    
    return 0;
}