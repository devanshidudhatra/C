#include<stdio.h>

int main(){
    float c,f,celcius,farhen;
    printf("enter celcius:");
    scanf("%f",&celcius);
    printf("Enter farhenheit:");
    scanf("%f",&farhen);
    
    f=((9/5)*(celcius))+32;
    c=(5/9)*(farhen-32);
    printf("celcius is :%f",c);
    printf("\nfarhenheit is :%f",f);
    return 0;
}