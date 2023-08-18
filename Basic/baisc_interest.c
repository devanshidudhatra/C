#include<stdio.h>

int main(){
    int p,r,n,interest;
    printf("Enter principal:");
    scanf("%d",&p);
    printf("Enter rate:");
    scanf("%d",&r);
    printf("Enter time period:");
    scanf("%d",&n);
    interest=p*n*r;
    interest=interest/10;
    printf("Simple Interst is :%d",interest);
    return 0;
}