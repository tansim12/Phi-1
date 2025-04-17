
//! 1
// #include <stdio.h>

// int main()
// {
//     int a;
//     int b;
//     scanf("%d %d",&a,&b);
//     if (a>=b)
//     {
//         /* code */
//         printf("Yes");
//     }else{
//         printf("no");
//     }

//     return 0;
// }

// !2

#include <stdio.h>

int main()
{
    int a;
    int b;
    int middle;
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        /* code */
        middle = a;
        a = b;
        b = middle;
    }
    if (b % a == 0)
    {
        /* code */
        printf("Multiples");
    }
    else
    {

        printf("No Multiples");
    }

    return 0;
}