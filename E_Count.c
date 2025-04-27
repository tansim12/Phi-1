#include <stdio.h>

int main()
{
    char str[1000001];
    scanf("%s",&str);
    int length = strlen(str);
    int sum = 0;
   for (int i = 0; i < length; i++)
   {
    /* code */
    sum = sum + (str[i]-48);
   }
   
    printf("%d",sum);
    
    return 0;
}