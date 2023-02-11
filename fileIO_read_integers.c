#include<stdio.h>

int main()
{
    FILE *fptr;
    char i;
    fptr = fopen("Hello.txt" , "r");
    
    i=fgetc(fptr);
    while(i != EOF){
        printf("%c",i);
        i = fgetc(fptr);
    }
   fclose(fptr);
   return 0; 
}