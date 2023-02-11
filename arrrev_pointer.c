#include<stdio.h>

int main()
{
    
    int a[5];
    //allocating address of a[0] to p
   int *p = a;
    printf("Enter any 5 numbers:");
    for( int i=0 ; i<5 ; i++)
    {
       scanf("%d" , p[i]);
       
    }


    //printing reverse array
    for(int i=4 ; i>=0 ; i--)
    {
        printf("%d" , a[i]);
    }
    return 0;
}    