#include<stdio.h>


struct student
{
    int roll;
    float marks;
    char name[20];
};

int main()
{
    struct student s[10];
    
    for(int i=0 ; i<5 ;i++)
    {
        
        printf("Enter roll no. of student %d :",i+1);
        scanf("%d" , &s[i].roll);
        
        printf("Enter name of student %d :",i+1);
        gets(s[i].name);
         scanf("%s" , &s[i].name);
        //fgets(s1[i] , 10 , stdin);
        printf("Enter marks of student %d :",i+1);
        scanf("%f" , &s[i].marks);
        //strcpy(s[i].name , s1[i]);
    }

    // for(int i=0 ; i<5 ; i++)
    // {
        
    // }

    for(int i=0 ; i<5 ;i++)
    {
        printf("%d\t",s[i].roll);
        printf("%s\t" , s[i].name);
        printf("%f\n",s[i].marks);
    }
    return 0;
}