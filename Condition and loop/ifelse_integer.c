#include<stdio.h>

int main(){
    int x;
    printf("Enter number:");
    scanf("%d",&x);
    if(x>0){
        printf("It is a posistive number");
    }
    else if(x<0){
        printf("It is a negative number");
    }
    else{
        printf("0 is neither positive nor negative");
    }
    return 0;
}