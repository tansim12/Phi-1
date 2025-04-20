#include <stdio.h>

int main()
{
    int n;
    // scanf("%d",&n);
    while (scanf("%d",&n))
    {
        if (n == 1999)
        {
            printf("Correct\n");
            break;
        }else {
            printf("Wrong\n");
        }
        
    }
    
    return 0;
}