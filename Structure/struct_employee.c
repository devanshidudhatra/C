#include <stdio.h>
#include<string.h>
  
typedef struct employee      
{   int id;      
    char name[50];      
    float salary;      
}coe;  //declaring e1 and e2 variables for structure    
int main( )    
{    coe e1,e2;
    //store first employee information  
    printf("For first employee : ");
    printf("\nEnter id of employee : ");  
    scanf("%d", &e1.id);
    printf("Enter name of employee : ");
    scanf("%s",&e1.name); 
    printf("Enter salary of employee : ");
    scanf("%f" , &e1.salary); 
    
    //store second employee information  
    printf("For second employee : ");  
    printf("\nEnter id of employee : ");  
    scanf("%d", &e2.id);
    printf("Enter name of employee : ");
    scanf("%s",&e2.name); 
    printf("Enter salary of employee : ");
    scanf("%f" , &e2.salary);   
     
   // printing info
   printf("%s has id %d and earns %f\n",e1.name,e1.id,e1.salary);  
   printf("%s has id %d and earns %f\n",e2.name,e2.id,e2.salary);
   return 0;    
}

