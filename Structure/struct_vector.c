#include<stdio.h>
#include<string.h>

typedef struct vector{
    int x , y;
}wtf;

//void calcsum(wtf sx[2] , wtf sy[2] , wtf sum);

void main(){
    wtf sx[2],sy[2] , sum  ;
    
    //wtf *p1 =sx , *p2 = sy;
    for(int i=0 ; i<2 ;i++){
    printf("Enter x-coordinate of vector %d:" , i+1);
    scanf("%d" , &sx[i].x);
    printf("Enter y coordinate of vector %d:" , i+1);
    scanf("%d" , &sy[i].y);
    }
    //void calcsum(sx, sy , sum);
    sum.x = (sx[0].x) + (sx[1].x);
    sum.y = (sy[0].y) + (sy[1].y);
    printf("Sum of two vectors is : %d i + %d j" , sum.x , sum.y);
    
}

// void calcsum(wtf sx[2] , wtf sy[2] , wtf sum){
//     sum.x = sx[0].x + sx[1].x;
//     sum.y = sy[0].y + sy[1].y;
//     printf("Sum of two vectors is : %di + %dj" , sum.x , sum.y);
// }