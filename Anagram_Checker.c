#include <stdio.h>
#include <string.h>

int main()
{
    char str1[101];
    char str2[101];
    scanf("%s %s", &str1, &str2);
    int l1 = strlen(str1);
    int l2 = strlen(str2);

    if (l1 != l2)
    {
        /* code */
        printf("No");
        return 0;
    }

    int count1[26] = {0};
    int count2[26] = {0};

    for (int i = 0; i < l1; i++)
    {
        /* code */
        count1[str1[i] - 'a']++;
        count2[str2[i] - 'a']++;
    }
    int isAnagram = 1;
    for (int i = 0; i < 26; i++)
    {
        /* code */
        if (count1[i] != count2[i])
        {
            isAnagram = 0;
            break;
        }
    }
    if (isAnagram == 1)
    {
        /* code */
        printf("Yes"); 
    }else {
        printf("No");
    }
    

    return 0;
}