#include<stdio.h>
int main(){
    int i,j,r1,c1,r2,c2,k,a[100][100],b[100][100],multi[100][100];
    printf("Enter no of rows and columns of first matrix:");
    scanf("%d %d",&r1,&c1);
    printf("Enter no of rows and columns of second matrix:");
    scanf("%d %d",&r2,&c2);
    if(c1==r2)
    {
    //Enter 1st arrray
    
    
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("Enter [%d][%d] element of first matrix :" , i+1 ,j+1 );
            scanf("%d",&a[i][j]); 
        }
    }

    //Enter 2nd array
    
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("Enter [%d][%d] element of second matrix :" , i+1 ,j+1 );
            scanf("%d",&b[i][j]); 
        }
    }

    //Array multiplication
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            multi[i][j] = 0;
            for(k=0;k<c2;k++){
                multi[i][j] = multi[i][j] + a[i][k]*b[k][j];
            }
        }
    }
    printf("Multiplication of matrix is: \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
             printf("%d ",multi[i][j]);
        }
        printf("\n");
    } 
    }
    else{
        printf("This matrix cannot be multiplied");
    }
    return 0;       
}