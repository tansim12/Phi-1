#include <stdio.h>

int main()
{
    int n ;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    long long int sum =0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    printf("%lld",sum < 0 ? -sum : sum);
    return 0;
}