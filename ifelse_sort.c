#include<stdio.h>
int main(){
    int a[5] = {55,65,34,12,11};
    int i,j,temp;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
       { if(a[j]>a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
       } 
    }

    for(i=0;i<5;i++)
    {
        printf("\n %d",a[i]);
    }
    return 0;
}