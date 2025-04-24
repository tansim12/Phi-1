// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n+1];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d ",&arr[i]);
//     }
//     int inx,val;
//     scanf("%d %d" , &inx,&val);

//     for (int i = n+1; i >= inx+1; i--)
//     {
//         arr[i] = arr[i-1];
//     }

//     arr[inx]=val;

//     for (int i = 0; i < n+1; i++)
//     {
//         printf("%d ",arr[i]);
//     }

//     return 0;
// }

// !array element replace
// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n+1];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int index,value;
//     scanf("%d %d",&index,&value);

//     for (int i = n; i >= index+1; i--)
//     {
//         arr[i] = arr[i-1];
//     }
//     arr[index]=value;
//     for (int i = 0; i < n+1; i++)
//     {
//         printf("%d",arr[i]);
//     }

//     return 0;
// }

// #include <stdio.h>

// !array element remove
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int index;
//     scanf("%d", &index);
//     for (int i = index; i < n-1; i++)
//     {
//         arr[i]=arr[i+1];
//     }
//     for (int i = 0; i < n-1; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

// ! value swap
// #include <stdio.h>

// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     int middle;
//     middle = a;
//     a = b;
//     b = middle;
//     printf("%d %d", a, b);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {

//         scanf("%d",&arr[i]);
//     }
//     for (int i = n-1; i >= 0; i--)
//     {

//             printf("%d ",arr[i]);

//     }

//     return 0;
// }

// // ! reverse array value
// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         scanf("%d",&arr[i]);
//     }
//     for (int i = n-1; i >= 0; i--)
//     {
//        printf("%d ",arr[i]);
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }

    int i = 0;     // 0 index
    int j = n - 1; // array last index
    while (i < j)
    {
        /* code */
        int middle = arr[i];

        arr[i] = arr[j];
        arr[j] = middle;

        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d ", arr[i]);
    }

    return 0;
}