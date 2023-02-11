#include<stdio.h>
int main(){
    char ch;
    printf("Enter value:");
    scanf("%c",&ch);
     if(ch >= 'a' && ch <= 'z'){
       printf("It is a lowercase alphabet");
    }
     else if(ch >= 'A' && ch <= 'Z'){
        printf("It is a uppercase variable");
    }
    else if(ch >= '0' && ch <= '9'){
        printf("It is a number");
    }
    else{
        printf("It is a special character");
    }
    return 0;
}