// #include <stdio.h>

// int main()
// {
//     int tc ;
//     scanf("%d",&tc);
//     for (int i = 1; i <=tc; i++)
//     {
//         /* code */
//         for (int j = 0; j < i; j++)
//         {
//             /* code */
//             printf("*");
//         }
//         printf("\n");
        
//     }
    
//     return 0;
// }

#include <stdio.h>

int main()
{
    int tc ;
    scanf("%d",&tc);
    for (int i = tc; i >=0; i--)
    {
        /* code */
        for (int j = 0; j < i; j++)
        {
            /* code */
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}