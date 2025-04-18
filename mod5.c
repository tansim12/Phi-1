
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

// // !2

// #include <stdio.h>

// int main()
// {
//     int a;
//     int b;
//     int middle;
//     scanf("%d %d", &a, &b);

//     if (a > b)
//     {
//         /* code */
//         middle = a;
//         a = b;
//         b = middle;
//     }
//     if (b % a == 0)
//     {
//         /* code */
//         printf("Multiples");
//     }
//     else
//     {

//         printf("No Multiples");
//     }

//     return 0;
// }

//! First ডিজিট

// #include <stdio.h>

// int main()
// {
//     int n;

//     scanf("%d", &n);
//     while (n >= 1000)
//     {
//         /* code */
//         n = n / 1000;
//         if (n % 2 == 0)
//         {
//             /* code */
//             printf("EVEN");
//         }
//         else
//         {
//             /* code */
//             printf("ODD");
//         }
//     }

//     return 0;
// }

// ! n char

// #include <stdio.h>

// int main()
// {
//   char X;

//   scanf("%c", &X);
//   scanf("%d", &X);
//   int c = X;
//   if (c >= 65 && c <= 90)
//   {
//     c = c + 32;
//     printf("%c", c);
//   }
//   else
//   {
//     c = c - 32;
//     printf("%c", c);
//   }

//   return 0;
// }

// ! capital or small ar big digit
// #include <stdio.h>

// int main()
// {
//   char ch;
//   scanf("%c", &ch);
//   if (ch >= 'a' && ch <= 'z')
//   {
//     printf("ALPHA\n");
//     printf("IS SMALL");
//   }
//   else if (ch >= 48 && ch <= 57)
//   {
//     printf("IS DIGIT");
//   }
//   else if (ch >= 'A' && ch <= 'Z')
//   {
//     printf("ALPHA\n");
//     printf("IS CAPITAL");
//   }

//   return 0;
// }

// ! max and min number
#include <stdio.h>

int main()
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  int min = a;
  int max = a;
  if (b >= max)
    max = b;
  if (c >= max)
    max = c;

  if (b <= min)
    min = b;
  if (c <= min)
    min = c;

  printf("%d %d\n", min, max);

  return 0;
}