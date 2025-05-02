#include <stdio.h>
#include<float.h>
int main()
{
   int tc;
   scanf("%d",&tc);
   for (int i = 0; i < tc; i++)
   {
    /* code */
    int arr[100000];
    for (int i = 0; i < 3; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }

    /* code */
 
    long long int onePersonFinishedWord = arr[0]*arr[2];
    int totalDay = onePersonFinishedWord /(arr[0]+arr[1]);
    int fewerDay = arr[2] - totalDay;

    printf("%d\n",fewerDay);
   }
   

    return 0;
}