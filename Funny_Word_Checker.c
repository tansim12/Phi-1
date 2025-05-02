#include <stdio.h>
#include <string.h>

int main()
{
    char  str[101];
    scanf("%s",&str);
    int length = strlen(str);

    if (str[0]==str[length-1])
    {
        /* code */
        printf("Yes");
    }else {
        printf("No");
    }
    
    return 0;
}