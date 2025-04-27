// #include <stdio.h>

// int main()
// {
//     char str[10];
//     printf("%d \n",str[0]);
//     scanf("%s", &str);
//     printf("%d \n",str[6]);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char str[50];
//     // fgets inter কে ও input হিসাবে নিয়ে নেই ।
//     fgets(str,50,stdin);
//     printf("%s",str);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     // char str[5] = {'t','a','n','s','\0'};
//     char str[6]= "tansi";
//     printf("%s",str);
//     return 0;
// }

// ! string length
// #include <stdio.h>

// int main()
// {
//     char str[101];
//     scanf("%s",&str);
//     int count = 0;
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         /* code */
//         count++;
//     }
//     printf("%d",count);

//     return 0;
// }

// ! with space and enter value
// #include <stdio.h>

// int main()
// {
//     char str[1000];
//     fgets(str,1000,stdin);

//         int count = 0;
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         /* code */
//         count++;
//     }
//     printf("%d",count);

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s",&str);

    int count = strlen(str);
    printf("%d", count);

    return 0;
}