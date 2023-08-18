#include<stdio.h>

int main(){
    int t1,t2,nt,n,i;
    t1=0,t2=1;
    nt=t1+t2;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("\nFibonacci series is: %d, %d",t1,t2);
    for(i=3;i<=n;i++){
        
        t1=t2;
        t2=nt;
        nt=t1+t2;
        printf(",%d",nt);
    }
    return 0;
}