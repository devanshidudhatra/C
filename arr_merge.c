#include<stdio.h>

int main()
{
    int a[10],i,j;
    int a1size=4 , a2size=4 , asize;
    asize = a1size + a2size ; 

     int a1[4] = {4,3,2,1} ;
    int a2[4] = {16,20,12,11} ;
    
    //Transferring a1 to a
    for(i=0 ; i<a1size ; i++){
        a[i] = a1[i];
    }

    //Transferring a2 to a
    for(i=0, j=a1size ; i<a2size &&j<asize ; i++ , j++){
        a[j] = a2[i];
    }

    //Printing of merged array
    for(i=0 ; i<asize ; i++){
    printf("%d ",a[i]);
    }

    return 0;
}