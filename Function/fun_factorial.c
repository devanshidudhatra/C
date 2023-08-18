#include<stdio.h>

int fact(int n);    //Declaration

void main(){
    int n,f,u;
    printf("Enter Number:");
    scanf("%d",&n);
    f=fact(n);     // Calling
    printf("Factorial is: %d",f);
    

}
int fact(int n)   // Definition
{
    if(n==0){
        return 1;
    }
    else if(n==1){
        return 1;
    }
    else{
        return n * fact(n-1);  // Recursion
        
    }
}    
    

