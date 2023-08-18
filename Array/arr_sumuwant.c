#include<stdio.h>

int main()
{
    int a[10] , sum,size,i,j,temp;

    //inputing array
    printf("enter your any 5 numbers:");
    for(i=0 ; i<5 ; i++)
    {
        scanf("%d" , &a[i]);
    }
    
    //inputing sum
    printf("Enter the sum that you want :");
    scanf("%d" , &sum);

    //comparing
    for(i=0 ; i<5 ; i++){
        for(j=0; j<5 ; j++)
        {
            temp = a[i] + a[j];
            if(sum == temp)
            {
                printf("the indices at which sum of numbers equal the sum are %d and %d\n",i,j);
                break;
            }
        }
    }
    printf("there are no two numbers whose sum is %d", sum);
    return 0;
}
