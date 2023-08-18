#include<stdio.h>
#include<string.h>
int main()
{
    char s[30];
    printf("Enter any string:");
    scanf("%s",s);
    int length;
    length = strlen(s);
    printf("Length of string is : %d", length);
    return 0;
}

//alternate method

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s1[30];
//     printf("Enter any string:");
//     scanf("%s", s1);
//     int i;
//     for(i=0; s1[i] != '\0' ; i++);
//     printf("Length of string is:%d", i);
//     return 0;
// }


