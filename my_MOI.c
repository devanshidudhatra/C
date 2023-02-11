#include<stdio.h>

//declaring functions for which we need moi
float rectangle(float b , float h);
float triangle(float b , float h);
float circle(float r);
float semicircle(float r);
float quadrant(float r);

int main()
{
    printf("Enter 1 for MOI of rectangle.\n");
    printf("Enter 2 for MOI of triangle.\n");
    printf("Enter 3 for MOI of circle.\n");
    printf("Enter 4 for MOI of semicircle.\n");
    printf("Enter 5 for MOI of quadrant.\n");

    int ch;
    float b,h,r;
    scanf("%d", &ch);

    switch(ch)
    {
        case 1: printf("Enter base length and height :");
                scanf("%f %f",&b , &h);
                rectangle(b,h);
                break;
        case 2: printf("Enter base length and height :");
                scanf("%f %f",&b , &h);
                triangle(b,h);
                break;
        case 3: printf("Enter radius :");
                scanf("%f ",&r);
                circle(r);
                break;
        case 4: printf("Enter radius :");
                scanf("%f ",&r);
                semicircle(r);
                break;
        case 5: printf("Enter radius :");
                scanf("%f ",&r);
                quadrant(r);
                break;
        default: printf("Invalid number.");
                 break;                        
                               
    }
    return 0;
}


float rectangle(float b , float h)
{
    printf("The Moment of Inertia of rectangle about centroidal axis is : %f\n  " , b*h*h*h/12);
    printf("The Moment of Inertia about its base is : %f\n" , b*h*h*h/3);
    return 0;
}

float triangle(float b , float h)
{
    printf("The Moment of Inertia of triangle about centroidal axis is : %f\n  " , b*h*h*h/36);
    printf("The Moment of Inertia about its base is : %f" , b*h*h*h/12);
    return 0;
}

float circle(float r)
{
    printf("The MOment of Inertia of circle about its centroidal axis is : %f\n" , 3.14*r*r*r*r/4);
    return 0;
}

float semicircle(float r)
{
    printf("The MOment of Inertia of circle about its centroidal axis is : %f\n" , 0.11*r*r*r*r);
    printf("The Moment of Inertia of semicricle about its base is : %f\n" , 3.14*r*r*r*r/8);
    return 0;
}

float quadrant(float r)
{
    printf("The MOment of Inertia of circle about its centroidal axis is : %f\n" , 0.055*r*r*r*r);
    printf("The Moment of Inertia of quadrant about its base is : %f\n" , 3.14*r*r*r*r/16);
    return 0;
}