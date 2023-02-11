#include<stdio.h>
#include<string.h>

int main()
{
    char s[10];
    printf("Enter the string:");
    gets(s);
    printf("String in uppercase is %s " , strupr(s));
    printf("String in lowercase is %s " , strlwr(s));
    return 0;
}