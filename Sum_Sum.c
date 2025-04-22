#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }
    int sumOfPositive = 0;
    int sumOfNegative = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>=0)
        {
            sumOfPositive+=arr[i];
        }else
        {
            sumOfNegative+=arr[i];
        }
    }
    printf("%d %d ", sumOfPositive , sumOfNegative);
    return 0;
}