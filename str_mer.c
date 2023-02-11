#include<stdio.h>
#include<string.h>

int main()
{
    int  ls1 , ls2 , ls;
    char s1[10] , s2[10] , s[10] ;

    //Inputing two strings
    printf("Enter first string : ");
    scanf("%s" , &s1);
    printf("Enter second string : ");
    scanf("%s" , &s2);

    //Taking length of strings
    ls1 = strlen(s1);
    ls2 = strlen(s2);
    ls = ls1 + ls2;

    //Printing of first string
    for( int i=0 ; i<ls1 ; i++)
    {
        printf("%c" , s1[i]);
    }   

    printf(" ");

    //Printing of second array
    for(int j=0 ; j<ls2 ; j++)
    {
        printf("%c" , s2[j]);
    }

    return 0;
}