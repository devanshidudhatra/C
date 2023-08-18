//write a program to take student information from user and print it into file


#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("student.txt","w");
    
    int roll;
    char name[10];
    float marks;

    printf("Enter roll no. of student : ");
    scanf("%d" , &roll);
    printf("Enter name of student : ");
    scanf("%s",&name);
    printf("Enter marks of student : ");
    scanf("%f", &marks);

    fprintf(fptr , "%d\t" , roll);
    fprintf(fptr , "%s\t" , name);
    fprintf(fptr , "%f\t" , marks);

    fclose(fptr);
    return 0;
}