#include <stdio.h>

int main()
{
    int initial ;
    int given ;
    int buy;
    scanf("%d %d %d",&initial,&given,&buy);
    int calc = (initial+ buy)-given;
    printf("%d",calc);
    return 0;
}