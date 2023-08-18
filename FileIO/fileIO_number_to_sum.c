//write a program to replace the sum of two numbers from a file with numbers

#include<stdio.h>
int main()
{
    FILE *fptr;
    int a,b;
    fptr = fopen("sum.txt","r");

    
    fscanf(fptr,"%d",&a);
    fscanf(fptr,"%d",&b);
    a=a+b;
    fclose(fptr);
    fptr = fopen("sum.txt","w");
    fprintf(fptr,"%d",a);
    fclose(fptr);
    return 0;
}