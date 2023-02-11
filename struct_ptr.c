//example of declaration of pointer
//struct xyz{};
//struct xyz s;
//struct xyz *ptr;
//*ptr = s;

//to print any pointer syntax is
//printf("" , (*ptr).name);

//arrow operator
//instead of (*ptr).name we can write ptr->name

//passing structure to functions
//void funname(struct student s);
//first define structure then declare function
//we cannot change the value of any variable of structure in function, it can only be done in main function

//typedef keyword
//it creates nick names
//declare this while defining structure
//Eg. typedef struct nameofstructure{...}nick;
//then in main u can declare: nick s;

#include<stdio.h>
#include<string.h>

typedef struct address{
    int houseno;
    char block;
    char city[30];
    char state[30];
}wtf;

void main(){
    wtf s[10];
    wtf *p = s;
    for(int i=0 ; i<5 ; i++){
        printf("Enter House no. %d:" , i+1);
        scanf("%d" , &p[i].houseno);
        printf("Enter block %d:" , i+1);
        scanf("%s" , &p[i].block);
        printf("Enter city of house %d:" , i+1);
        scanf("%s" , &p[i].city);
        printf("Enter state of house %d:" , i+1);
        scanf("%s" , &p[i].state);
    }
    printf("House No.\t\tBlock\t\tCity\t\tState\n");
    for(int i=0 ; i<5 ; i++){
       printf("%d\t\t\t",p[i].houseno); 
       printf("%c\t\t",p[i].block); 
       printf("%s\t\t",p[i].city); 
       printf("%s\n",p[i].state); 
    }
}