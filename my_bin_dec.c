#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int num, i, ls, dec = 0 ,d,j;
    char s[30];

    //taking input as binary number
    printf("Enter Binary Number:");
    scanf("%s",&s);

    //storing length of string
    ls = strlen(s);

    //Converting
    dec = 0;
    for(i=0, j=ls ; i<ls && j>0 ; i++ , j--)
    {
        d = s[j] * pow(2,i);
        dec = dec + d;
    }

    //Printing decimal value
    printf("Decimal value is : %d", dec );
    return 0;
}