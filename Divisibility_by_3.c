#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char str[100001];
    scanf("%s",&str);
    int sum  = 0;
   
    

    for (int i = 0; i < n; i++)
    {
        /* code */
        sum = sum + str[i]-'0';

    }
    if (sum % 3 == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    
    return 0;
}