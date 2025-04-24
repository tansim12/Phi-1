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

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int index;
    scanf("%d", &index);
    for (int i = index; i < n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
