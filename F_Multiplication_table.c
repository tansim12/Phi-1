#include <stdio.h>

int main()
{
    int n;
    int line =12;
    scanf("%d",&n);
for (int i = 1; i <=line; i++)
{
 
    printf("%d * %d = %d\n",n,i,n*i);
}

    return 0;
}