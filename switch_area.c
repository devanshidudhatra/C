#include<stdio.h>
int main(){
    int c,s,a,b,r,l,h,area;
    printf("\nEnter 1 for area of square");
    printf("\nEnter 2 for area of rectangle");
    printf("\nEnter 3 for area of circle");
    printf("\nEnter 4 for area of triangle");
    scanf("%d",&c);
    switch(c){
        case 1:printf("Enter side:");
               scanf("%d",&s);
               area=s*s;
               printf("Area is :%d",area);break;
        case 2:printf("Enter length and breath:");
               scanf("%d %d",&a,&b);
               area=a*b;
               printf("Area is :%d",area);
               break;
        case 3:printf("Enter radius:");
               scanf("%d",&r);
               area=3.14*r*r;
               printf("Area is :%d",area);
               break;
        case 4:printf("Enter length and height:");
               scanf("%d %d",&l,&h);
               area=l*h;
               area=area/2;
               printf("Area is :%d",area);
               break;
        default: printf("Wrong Output");                            
    }
    return 0;
}