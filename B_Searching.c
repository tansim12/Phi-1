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
    int value;
    int indexValue;
    scanf("%d", &value);
    for (int i = 0; i < n; i++)
    {
        if (value == arr[i])
        {
            printf("%d", i);
            indexValue = arr[i];
            break;
        }
    }
    if (value != indexValue)
    {
        printf("%d", -1);
    }

    return 0;
}