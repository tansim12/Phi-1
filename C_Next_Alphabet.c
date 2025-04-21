#include <stdio.h>

int main()
{
    char ch ;
    scanf("%c",&ch);
    scanf("%d",&ch);
    if (ch == 122)
    {
        ch =97;     
    }else {
        ch +=1;
    }
    printf("%c",ch);
    
    return 0;
}