#include<stdio.h>

int main(){
    float hours,mins,h,m;
    printf("enter hours:");
    scanf("%f",&hours);
    printf("enter minutes:");
    scanf("%f",&mins);
    
    h=60/mins;
    m=hours*60;
    printf("\nHours are:%f",h);
    printf("\nMinutes are:%f",m);
    return 0;
}