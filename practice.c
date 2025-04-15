// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {

//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     int x;
//     long long int b;
//     float c;
//     char d;

//     scanf("%d %lld %f %c", &x, &b, &c, &d);

//     printf("%d %lld %f %c", x, b, c, d);

//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// int main()
// {

//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     int n;

//     scanf("%d", &n);

//     for (int i = 0; i <= n; i++)
//     {
//         /* code */
//         printf("I Love Practice");
//     }

//     return 0;
// }

int main()
{
    // int a;
    // long long int b;
    // float c;
    // char d;
    // scanf("%d %lld %f %c", &a, &b, &c, &d);
    // printf("%d %lld %.2f %c", a, b, c, d);

    int n ;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        /* code */
        if(i%n == 0){
            printf("Yes");
        }else {
             printf("No");
        }
    }
   

    return 0;
}