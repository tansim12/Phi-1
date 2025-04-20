// #include <stdio.h>

// int main()
// {
//     int n ;
//     scanf("%d",&n);
//     for (int i = n; 1 <= i; i--)
//     {
//         /* code */
//         if (i%2 ==0)
//         {
//             printf("%d\n",i);
//         }
        
//     }
    
//     return 0;
// }


#include <stdio.h>

int main()
{
    int x = 10;
    int y = x++;
    int z = ++y;
    printf("%d",z++);
    return 0;
}