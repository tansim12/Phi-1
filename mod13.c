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

// ! reverse print 
// #include <stdio.h>

// int main()
// {
//     int tc ;
//     scanf("%d",&tc);
//     for (int i = tc; i >=0; i--)
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


// #include <stdio.h>

// int main()
// {
//     int n,star=1 ;
//     scanf("%d",&n);
//     for (int i = 1; i <=n; i++)
//     {
//         /* code */
//         for (int j = 1; j <= star; j++)
//         {
//             /* code */
//             printf("*");
//         }
//         printf("\n");
//         star++;
        
//     }
    
//     return 0;
// }

//! reverse 
#include <stdio.h>

int main()
{
    int n ;
    scanf("%d",&n);
    int star=n;
    for (int i = 1; i <=n; i++)
    {
        /* code */
        for (int j = 1; j <= star; j++)
        {
            /* code */
            printf("*");
        }
        printf("\n");
        star--;
        
    }
    
    return 0;
}