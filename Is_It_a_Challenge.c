#include <stdio.h>

int main()
{
    int inputNumber;
    scanf("%d",&inputNumber);
    if (inputNumber > 0)
    {
        for (int i = 1; i <= inputNumber; i++)
        {
            printf("%d ",i);
        }
        
    } 
    if (inputNumber <= 0) {
        for (int i = inputNumber; i<=0; i++)
        {
            printf("%d ",i);
        }
    }
    
    return 0;
}