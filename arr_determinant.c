#include<stdio.h>
#include<string.h>

int main()
{
    int a[3][3] , D ,n,i,j,D1,D2,d;

    //Taking the number of matrix
    printf("Enter the order of matrix:");
    scanf("%d", &n);

    //2D Matrix
    if(n==2){
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                printf("Enter a[%d][%d] : ",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
        }
        //Calculating Determinant
    D = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);
    // printf("Determinant of \n");
    //     for(i=0;i<2;i++){
    //     for(j=0;j<2;j++){
    //         printf("%d ", a[i][j]);
    //     }
    //     printf("\n");
    // }
    //printf("is %d\n" , D);
    printf("Determinant of %d %d is %d\n ", a[0][0],a[0][1], D);
    printf("              %d %d",a[1][0],a[1][1]);

    }
    

    // 3D Matrix
    else if(n==3){
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("Enter a[%d][%d] : " , i+1,j+1);
                scanf("%d", &a[i][j]);
            }
        }    
        //Calculating determinant
        D = a[1][1] * a[2][2] - a[1][2] * a[2][1];
        D = D * a[0][0];
        D1 = a[0][1] * a[2][2] - a[0][2] * a[2][1];
        D1 = D1 * a[1][0];
        D2 = a[0][1] * a[1][2] - a[1][1] * a[0][2];
        D2 = D2 * a[2][0];
        d = D - D1 + D2;
        // printf("Determinant of \n");
        // for(i=0;i<3;i++){
        //     for(j=0;j<3;j++){
        //     printf("%d ", a[i][j]);
        //    }
        // printf("\n");
        // }
        // printf("is %d " , d);
        printf("Determinant of %d %d %d is %d\n ", a[0][0],a[0][1],a[0][2], d);
    printf("              %d %d %d\n",a[1][0],a[1][1],a[1][2]);
    printf("               %d %d %d\n",a[2][0],a[2][1],a[2][2]);
    }

    //Other
    else{
        printf("Invalid Matrix");
    }
    return 0;
}