#include<stdio.h>
#include<string.h>
void main()
{
    char a[10];
    char b[10];
    int x;
    printf("Enter any number = ");
    gets(a);
    strcpy(b , strrev(a));
    strcpy(a , strrev(a));
    printf("%s\n" , b);
    printf("%s" , a);
    x=strcmp(a,b);
    
    if(x==0)
    {
      printf("\nNumber is palindrome.");
    }
    else
    {
      printf("\nNumber is not palindrome.");
    }
}