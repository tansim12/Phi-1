
// ! string copy 
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str1[101],str2[101];
//     scanf("%s %s",&str1 , &str2);

//     int lengthOrArr2 = strlen(str2);

//     for ( int i = 0; i <= lengthOrArr2; i++)
//     {
//         /* code */
//         str1[i] = str2[i];
//     }
    
//     printf("%s %s",str1 ,str2);
    
//     return 0;
// }


// ! string copy shortcut with strcpy 
// #include <stdio.h>
// #include <string.h>
// int main()
// {
    
//     char str1[101],str2[101], str3[101];
//     scanf("%s %s",&str1 , &str2);

//     strcpy(str3,str2); 

//     printf("%s %s %s",str1 ,str2 ,  str3);

//     return 0;
// }


// ! string concat
// #include <stdio.h>
// #include <string.h>
// int main()
// {
    
//     char str1[101],str2[101], str3[201];
//     scanf("%s %s",&str1 , &str2);
//     int length1 = strlen(str1);
//     int length2 = strlen(str2);
//     for ( int i = 0; i <= length1; i++)
//     {
//         /* code */
//         str3[i]=str1[i];
//     }
//     for ( int i = 0; i < length2; i++)
//     {
//         /* code */
//         str3[i+length1]=str2[i];
//     }
    

//     printf("%s %s %s",str1 ,str2 ,  str3);

//     return 0;
// }