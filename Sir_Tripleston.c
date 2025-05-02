#include <stdio.h>
#include <string.h>

int main()
{
    char str[78];
    scanf("%s",&str);
    int length = strlen(str);
    int counterArray[26] = {0}; 
    for (int i = 0; i < length; i++)
    {
        /* code */
        counterArray[str[i]-'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (counterArray[i] == 2)
        {
            printf("%c", i+'a');
        }
    }
    
    
    
    return 0;
}