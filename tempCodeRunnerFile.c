#include <stdio.h>
#include <string.h>
int main()
{

    char str1[101],str2[101], str3[101];
    scanf("%s %s",&str1 , &str2);

    strcpy(str3,str2);

    printf("%s %s %s",str1 ,str2 ,  str3);

    return 0;
}