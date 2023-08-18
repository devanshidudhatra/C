
#include<stdio.h>
int main(){
    int i,j,r,c,a[10][10],b[10][10],add[10][10];
    printf("Enter no of rows:");
    scanf("%d",&r);
    printf("Enter no of columns:");
    scanf("%d",&c);

    //Enter matrix 1
    int (*ptr1)[10];
    ptr1 = a;
    printf("Enter first array :");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&(*(*(ptr1+i)+j)));
        }
    }

    // Enter matrix 2
    int (*ptr2)[10];
    ptr2 = b;
    printf("Enter second matrix:");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&(*(*(ptr2+i)+j))); 
        }
    }

    //Matrix addition
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            add[i][j] = ptr1[i][j] + ptr2[i][j];
        }
    }

    //display
    printf("Addition of matrix is: \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            
            printf("%d ",add[i][j]);
        }
        printf("\n");
    } 
    return 0;       
}