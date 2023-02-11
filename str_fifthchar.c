#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30];
    
    printf("Enter any string:");
    scanf("%s", s1);
    
    char index;
    index = s1[4];
    printf("5th character is %c", index); 
    return 0;
}