#include<stdio.h>
int sum(int a, int b);

int main(){
    int x,y;
    printf("\n Enter the x and y");
    scanf("%d %d",&x,&y);
    sum(x,y);//function calling
    return 0;
}

int sum(int a , int b)
{
    int c;
    c=a+b;
    printf("%d",c);
    return 0;
}