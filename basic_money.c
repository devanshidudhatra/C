#include<stdio.h>

int main(){
    float dollar,rupee,d,r;
    printf("Enter Dollar:");
    scanf("%f",&dollar);
    printf("Enter Rupee:");
    scanf("%f",&rupee);
    rupee=48;
    d=rupee/48;
    r=48*dollar;
    printf("\nRupee are:%f",r);
    printf("\nDollar are:%f",d);
    return 0;
}