#include<stdio.h>

 int main() {
    int n,fact,i;
    printf("Enter no. :");
    scanf("%d",&n);
    fact=1;
    for(i=1;i<=n;i=i+1)
    {
        fact = fact * i;
    }
    printf("Factorial is : %d" , fact);
    //return 0;
}


