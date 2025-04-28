#include <stdio.h>
#include <string.h>

int main()
{
    char arr1[101],arr2[101];
    scanf("%s %s",&arr1 , &arr2);

    int lengthOrArr2 = strlen(arr2);

    for ( int i = 0; i <= lengthOrArr2; i++)
    {
        /* code */
        arr1[i] = arr2[i];
    }
    
    printf("%s %s",arr1 ,arr2);
    
    return 0;
}