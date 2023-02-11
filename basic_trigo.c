#include<stdio.h>
#include<math.h>

int main()
{
    float x;
    printf("Enter any angle in radians:");
    scanf("%f" , &x);
    printf("Cosine of %f is: %0.1f " , x,cos(x));
    return 0;

}

