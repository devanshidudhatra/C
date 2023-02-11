#include<stdio.h>
#include<string.h>

int main()
{
    char s[30];
    printf("Enter your string:");
    gets(s);
    for(int i=0 ; i<strlen(s) ; i++)
    {
        if(s[i] == ' '){
           s[i]='\b';
           continue;
        }
        
        printf("%c" , s[i]);
    }
    
    
    return 0;
}