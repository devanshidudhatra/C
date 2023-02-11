//write a program to read a string from a fle then replace it with vowels of the string
#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fptr;
    fptr = fopen("string.txt","r");
    char s[10];
    char i;
    i=fgetc(fptr);
    int j=0;
    while(i != EOF){
        s[j] = i;
        i = fgetc(fptr);
        j++;
    }
    puts(s);
    fclose(fptr);
    fptr = fopen("string.txt","w");
    for (int j=0;j<strlen(s);j++)
    {
        if(s[j] == 'a' ||s[j] == 'e' ||s[j] == 'i' ||s[j] == 'o' ||s[j] == 'u' ||s[j] == 'A' ||s[j] == 'E' ||s[j] == 'I' ||s[j] == 'O' ||s[j] == 'U' )
        fprintf(fptr,"%s",s[j]);
    }
    fclose(fptr);
    return 0;
}