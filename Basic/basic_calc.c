#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int a, b,add,sub,mul,div;
    printf("Enter two numbers:");
    scanf("%d",&a);
    scanf("%d",&b);
   // a=10;
    // b=20;
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("\nSum of a and b is : %d",add);
    printf("\nSubtraction of a and b is:%d",sub);
    printf("\nMultiplication of a and b is:%d",mul);
    printf("\nDivision of a and b is:%d",div);
    return 0;
}