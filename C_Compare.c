#include <stdio.h>
#include <string.h>

int main()
{
    char str1[21],str2[210];
    scanf("%s %s",&str1,&str2);
    int compareValue = strcmp(str1,str2);
    if (compareValue > 0)
    {
        /* code */
        printf("%s",str2);
    }else if (compareValue < 0) {
        printf("%s",str1);
    }else {
        printf("%s",str2);
    }
    
    return 0;
}