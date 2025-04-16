#include <stdio.h>
int main()
{
    long long int amount;
    int panjabiPrice = 1000;
    int shoesPrice = 500;
    scanf("%lld", &amount);

    if (amount > panjabiPrice)
    {
        /* code */
        printf("I will buy Punjabi\n");
        long long int afterBuyingPanjabiAmount = amount - panjabiPrice;
        
        if (afterBuyingPanjabiAmount >= shoesPrice)
        {
            /* code */
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else
    {
        printf("Bad luck!\n");
    }
}