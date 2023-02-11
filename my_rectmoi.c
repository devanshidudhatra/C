#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>

void rectangle(float b, float h);
void triangle(float b, float h);
void circle(float r);
void trapazoid(float b, float a, float h);
void semicircle(float r);
void rectcav(float R);
void triancav(float R);
void circav(float R);
void trapcav(float R);
void semicircav(float R);
void rect_tcav(float x , float y );
void triangle_tcav(float  x , float y);
void circle_tcav(float  x , float y);
void trap_tcav(float  x , float y);
void semi_tcav(float  x , float y);

void main()
{
    char f;
    char str1;
    float a,r,b, h, Area, Icx, Icy, Icz, Ix, Iy, Iz;
    float Rx, Ry, Rz, R1, R2, R3;
    char ch, Axis, n;
    float D;
    printf("=======================================================================================================\n");
    printf("              * MOMENT OF INERTIA & RADIUS OF GYRATION WITH AND WITHOUT CIRCULAR CAVITY *           ");
    printf("\n======================================================================================================\n");

    printf("DO YOU WANT TO CALCULATE THE MOMENT OF INERTIA AND RADIUS OF GYRATION OF REGUALR SHAPES ?(Y for Yes and N for No) : ");
    scanf("%s", &f);

    if (f == 'Y')
    {
        printf("    *------------------*\n");
        printf("    | R -->Rectangle   |\n");
        printf("    | T -->Triangle    |\n");
        printf("    | C -->Circle      |\n");
        printf("    | Z -->Trapezium   |\n");
        printf("    | S -->Semi-Circle |\n");
        printf("    *------------------*\n\n");
        char n;
        printf("Enter the character of shape whose MOI and ROG u want to find: ");
        scanf("%s", &n);
        switch (n)
        {
        case 'R':
        {
            printf("==================================================== ");
            printf("\n\t* MOMENT OF INERTIA OF A RECTANGLE *\n\n");
            printf("==================================================== \n");

            printf(" Enter the dimensions of rectangle (in mm) :\n");
            printf(" \tEnter base of rectangle (in mm) :");
            scanf("%f", &b);
            printf(" \tEnter height of rectangle (in mm) :");
            scanf("%f", &h);
            rectangle(b, h);
            break;
        }
        case 'T':
        {
            printf("======================================================================= ");
            printf("\n\t\t* MOMENT OF INERTIA OF A TRIANGLE *\t\t\n\n");
            printf("======================================================================= \n");

            printf(" Enter the dimensions of triangle (in mm) :\n");
            printf(" \tEnter base of triangle (in mm) :");
            scanf("%f", &b);
            printf(" \tEnter height of triangle (in mm) :");
            scanf("%f", &h);
            triangle(b, h);
            break;
        }
        case 'C':
        {
            printf("==================================================== ");
            printf("\n\t* MOMENT OF INERTIA OF A CIRCLE *\n\n");
            printf("==================================================== \n");

            printf(" \tEnter radius of circle (in mm) :");
            scanf("%f", &r);
            circle(r);
            break;
        }

        case 'Z':
        {
            printf("==================================================== ");
            printf("\n\t* MOMENT OF INERTIA OF A TRAPEZOID *\n\n");
            printf("==================================================== \n");

            printf(" Enter the dimensions of the trapezoid (in mm) :\n");
            printf(" \tEnter the enter longer side of trapezoid (in mm) :");
            scanf("%f", &b);
            printf(" \tEnter the enter shorter side of trapezoid (in mm) :");
            scanf("%f", &a);
            printf(" \tEnter height of the trapezoid (in mm) :");
            scanf("%f", &h);
            trapazoid(b, a, h);
            break;
        }

        case 'S':
        {
            printf("==================================================== ");
            printf("\n\t* MOMENT OF INERTIA OF A SEMICIRCLE *\n\n");
            printf("==================================================== \n");

            printf(" \tEnter radius of semi circle (in mm) :");
            scanf("%f", &r);
            semicircle(r);

            break;
        }
        default:
            printf("Invalid Input");
            break;
        }
    }

    else if (f == 'N')
    {
        float r;
        float R;
        float Icax, Icay, Icaz, Rcx, Rcy, Rcz, area;
        float Itx, Ity, Itz, Rtx, Rty, Rtz;
        float Icx, Icy, Icz, Rx, Ry, Rz, Area;

        printf("Do u want to calculate moment of inertia of any shape having circular cavity?(y for Yes and n for No)");
        int c;
        scanf("%d",&c);
        if(c == 'y'){
        printf("\n\nCALCULATING MOMENT OF INERTIA OF REGULAR SHAPES WITH CIRCULAR CAVITY HAVING SAME CENTROIDAL POINT AS THAT OF REGUALR SHAPE..\n\n");
        printf("                     NOTE : PLEASE ENTER THE DIMENSIONS OF THE CIRCULAR CAVITY LESSER THAN THE ORIGINAL DIMENSIONS...                     \n\n");

        printf("ENTER THE SHAPE YOU WANT TO CALCULATE MOI & ROG : \n\n");
        printf("    *------------------*\n");
        printf("    | R -->Rectangle   |\n");
        printf("    | T -->Triangle    |\n");
        printf("    | C -->Circle      |\n");
        printf("    | Z -->Trapezoid   |\n");
        printf("    | S -->Semi-Circle |\n");
        printf("    *------------------*\n\n");

        char str1;
        printf("Enter the character of your choice : ");
        scanf("%s", &str1);

        if (str1 == 'R')
        {
            printf("======================================================================= ");
            printf("\n\t* MOMENT OF INERTIA OF A RECTANGLE WITH CIRCULAR CAVITY *\n\n");
            printf("======================================================================= \n\n");
            printf("Please enter the radius of the Circular Cavity :  ");
            scanf("%f", &R);
            rectcav(R);
        }
        else if (str1 == 'T')
        {
            printf("======================================================================= ");
            printf("\n\t* MOMENT OF INERTIA OF A TRIANGLE WITH CIRCULAR CAVITY *\n\n");
            printf("======================================================================= \n\n");
            printf("Please enter the radius of the Circular Cavity :  ");
            scanf("%f", &R);
            triancav(R);
        }
        else if (str1 == 'C')
        {
            printf("============================================================== ");
            printf("\n\t* MOMENT OF INERTIA OF A CIRCLE WITH CIRCULAR CAVITY *\n\n");
            printf("============================================================== \n\n");
            printf("Please enter the radius of the Circular Cavity :  ");
            scanf("%f", &R);
            circav(R);
        }
        else if (str1 == 'Z')
        {
            printf("======================================================================== ");
            printf("\n\t* MOMENT OF INERTIA OF A TRAPEZOID WITH CIRCULAR CAVITY *\n\n");
            printf("======================================================================== \n\n");
            printf("Please enter the radius of the Circular Cavity :  ");
            scanf("%f", &R);
            trapcav(R);
        }
        else if (str1 == 'S')
        {
            printf("========================================================================= ");
            printf("\n\t* MOMENT OF INERTIA OF A SEMI-CIRCLE WITH CIRCULAR CAVITY *\n\n");
            printf("========================================================================= \n\n");
            printf("Please enter the radius of the Circular Cavity :  ");
            scanf("%f", &R);
            semicircav(R);
        }
        else
        {
            printf("INVALID INPUT...");
        }
    }
        else if(f == 'N')
    {
        float b,h;
        float r;
        float Icax, Icay, Icaz, Rcx, Rcy, Rcz, area;
        float Itx, Ity, Itz, Rtx, Rty, Rtz;
        float Icx, Icy, Icz, Rx, Ry, Rz, Area;

        printf("Do u want to calculate moment of inertia of any shape having triangular cavity?(y for Yes and n for No)");
        int c;
        scanf("%d",&c);
        if(c == 'y'){
        printf("\n\nCALCULATING MOMENT OF INERTIA OF REGULAR SHAPES WITH TRIANGULAR CAVITY HAVING SAME CENTROIDAL POINT AS THAT OF REGUALR SHAPE..\n\n");
        printf("                     NOTE : PLEASE ENTER THE DIMENSIONS OF THE TRIANGULAR CAVITY LESSER THAN THE ORIGINAL DIMENSIONS...                     \n\n");

        printf("ENTER THE SHAPE YOU WANT TO CALCULATE MOI & ROG : \n\n");
        printf("    *------------------*\n");
        printf("    | R -->Rectangle   |\n");
        printf("    | T -->Triangle    |\n");
        printf("    | C -->Circle      |\n");
        printf("    | Z -->Trapezoid   |\n");
        printf("    | S -->Semi-Circle |\n");
        printf("    *------------------*\n\n");

        char str1;
        printf("Enter the character of your choice : ");
        scanf("%s", &str1);

        if (str1 == 'R')
        {
            printf("======================================================================= ");
            printf("\n\t* MOMENT OF INERTIA OF A RECTANGLE WITH TRIANGULAR CAVITY *\n\n");
            printf("======================================================================= \n\n");
            printf("Please enter the height of triangular cavity :  ");
            scanf("%f" , &h);
            printf("Please enter the base of triangular cavity :  ");
            scanf("%f" , &b);
            rect_tcav(b,h);
        }
        else if (str1 == 'T')
        {
            printf("======================================================================= ");
            printf("\n\t* MOMENT OF INERTIA OF A TRIANGLE WITH TRIANGULAR CAVITY *\n\n");
            printf("======================================================================= \n\n");
            printf("Please enter the height of triangular cavity :  ");
            scanf("%f" , &h);
            printf("Please enter the base of triangular cavity :  ");
            scanf("%f" , &b);
            tri_tcav(b,h);
        }
        else if (str1 == 'C')
        {
            printf("============================================================== ");
            printf("\n\t* MOMENT OF INERTIA OF A CIRCLE WITH TRIANGULAR CAVITY *\n\n");
            printf("============================================================== \n\n");
            printf("Please enter the height of triangular cavity :  ");
            scanf("%f" , &h);
            printf("Please enter the base of triangular cavity :  ");
            scanf("%f" , &b);
            circle_tcav(b,h);
        }
        else if (str1 == 'Z')
        {
            printf("======================================================================== ");
            printf("\n\t* MOMENT OF INERTIA OF A TRAPEZOID WITH TRIANGULAR CAVITY *\n\n");
            printf("======================================================================== \n\n");
            printf("Please enter the height of triangular cavity :  ");
            scanf("%f" , &h);
            printf("Please enter the base of triangular cavity :  ");
            scanf("%f" , &b);
            trap_tcav(b,h);
        }
        else if (str1 == 'S')
        {
            printf("========================================================================= ");
            printf("\n\t* MOMENT OF INERTIA OF A SEMI-CIRCLE WITH TRIANGULAR CAVITY *\n\n");
            printf("========================================================================= \n\n");
            printf("Please enter the height of triangular cavity :  ");
            scanf("%f" , &h);
            printf("Please enter the base of triangular cavity :  ");
            scanf("%f" , &b);
            semi_tcav(b,h);
        }
        else
        {
            printf("INVALID INPUT...");
        }
    }
    }
    }
    else
    {
        printf("INVALID INPUT...");
    }
}

void rectangle(float b, float h)
{
    float Area, Icx, Icy, Icz, Ix, Iy, Iz;
    float Rx, Ry, Rz, R1, R2, R3;
    char ch, Axis, n;
    float D;
    Area = b * h;
    Icx = b * pow(h, 3) / 3;
    Icy = h * pow(b, 3) / 3;
    Icz = Icx + Icy;
    Rx = sqrt(Icx / Area);
    Ry = sqrt(Icy / Area);
    Rz = sqrt(Icz / Area);

    printf("\n\tMoment of inertia about centroidal X-Axis: %0.3f mm^4", Icx);
    printf("\n\tRadius of gyration about X-Axis: %0.3f mm", Rx);
    printf("\n");

    printf("\n\tMoment of inertia about centroidal Y-Axis: %0.3f mm^4", Icy);
    printf("\n\tRadius of gyration about Y-Axis: %0.3f mm", Ry);
    printf("\n");

    printf("\n\tMoment of inertia about centroidal Z-Axis(polar MOI): %0.3f mm^4", Icz);
    printf("\n\tRadius of gyration about Z-Axis: %0.3f mm", Rz);
    printf("\n");

    printf("\n Do you want to shift the axis:(Y for Yes & N for No): ");
    scanf("%s", &ch);
    if (ch == 'Y')
    {
        printf(" Please choose the axis(X or Y or Z): ");
        scanf("%s", &Axis);
        printf("\tEnter the shift distance(in mm) :");
        scanf("%f", &D);
        switch (Axis)
        {
        case 'X':
        {

            Ix = Icx + Area * pow(D, 2);
            printf("\n\tMoment of inertia about the shifted axis-X' is:%0.3f mm^4", Ix);
            if (n == 'Y' || n == 'y')
            {
                R1 = sqrt(Ix / Area);
                printf("\tRadius of gyration along shifted axis-X': %0.3f mm", R1);
            }
            else
            {
                printf("Thank you for using this program");
                break;
            }
            printf("\n Do you want to calculate radius of gyration along shifted axis(Y for yes & N for no): ");
            scanf("%s", &n);

            break;
        }
        case 'Y':
        {

            Iy = Icy + Area * pow(D, 2);
            printf("\n\tMoment of inertia about the shifted axis-Y' is: %0.3f mm^4", Iy);
            printf("\n\tdo you want to calculate radius of gyration along shifted axis(Y for yes & N for no): ");
            scanf("%s", &n);
            if (n == 'Y' || n == 'y')
            {
                R2 = sqrt(Iy / Area);
                printf("\tRadius of gyration along shifted axis-Y': %0.3f mm", R2);
            }
            else
            {
                printf("Thank you for using this program");
                break;
            }
            break;
        }
        case 'Z':
        {

            Iz = Icz + Area * pow(D, 2);
            printf("\n\tMoment of inertia about the shifted axis-Z' is: %0.3f mm^4", Iz);
            printf("\n\tDo you want to calculate radius of gyration along shifted axis(Y for yes & N for no): ");
            scanf("%s", &n);
            if (n == 'Y' || n == 'y')
            {
                R3 = sqrt(Iz / Area);
                printf("\tRadius of gyration along shifted axis-Z': %0.3f mm", R3);
            }
            else
            {
                printf("Thank you for using this program");
                break;
            }
            break;
        }

        default:
        {
            printf("please enter valid input");
            break;
        }
        }
    }
    else if (ch == 'N')
    {
        printf("Thank you for using this program");
    }
    else
    {
        printf("please enter valid input");
    }
}

void triangle(float b, float h)
{
    float Area, Icx, Icy, Icz, Ix, Iy, Iz;
    float Rx, Ry, Rz, R1, R2, R3;
    char ch, Axis, n;
    float D;
    Area = b * h / 2;
    Icx = b * pow(h, 3) / 36;
    Icy = h * pow(b, 3) / 48;
    Icz = Icx + Icy;
    Rx = sqrt(Icx / Area);
    Ry = sqrt(Icy / Area);
    Rz = sqrt(Icz / Area);

    printf("\n\tMoment of inertia about centroidal X-Axis: %0.3f mm^4", Icx);
    printf("\n\tRadius of gyration about X-Axis: %0.3f mm", Rx);
    printf("\n");

    printf("\n\tMoment of inertia about centroidal Y-Axis: %0.3f mm^4", Icy);
    printf("\n\tRadius of gyration about Y-Axis: %0.3f mm", Ry);
    printf("\n");

    printf("\n\tMoment of inertia about centroidal Z-Axis(polar MOI): %0.3f mm^4", Icz);
    printf("\n\tRadius of gyration about Z-Axis: %0.3f mm", Rz);
    printf("\n");

    printf("\n Do you want to shift the axis:(Y for Yes & N for No): ");
    scanf("%s", &ch);
    if (ch == 'Y')
    {
        printf(" Please choose the axis(X or Y or Z): ");
        scanf("%s", &Axis);
        printf("\tEnter the shift distance (in mm) :");
        scanf("%f", &D);
        switch (Axis)
        {
        case 'X':
        {

            Ix = Icx + Area * pow(D, 2);
            printf("\n\tMoment of inertia about the shifted axis-X' is:%0.3f mm^4", Ix);
            printf("\n Do you want to calculate radius of gyration along shifted axis(Y for yes & N for no): ");
            scanf("%s", &n);
            if (n == 'Y' || n == 'y')
            {
                R1 = sqrt(Ix / Area);
                printf("\tRadius of gyration along shifted axis-X': %0.3f mm", R1);
            }
            else
            {
                printf("Thank you for using this program");
                break;
            }

            break;
        }
        case 'Y':
        {

            Iy = Icy + Area * pow(D, 2);
            printf("\n\tMoment of inertia about the shifted axis-Y' is: %0.3f mm^4", Iy);
            printf("\n\tdo you want to calculate radius of gyration along shifted axis(Y for yes & N for no): ");
            scanf("%s", &n);
            if (n == 'Y' || n == 'y')
            {
                R2 = sqrt(Iy / Area);
                printf("\tRadius of gyration along shifted axis-Y': %0.3f mm", R2);
            }
            else
            {
                printf("Thank you for using this program");
                break;
            }
            break;
        }
        case 'Z':
        {

            Iz = Icz + Area * pow(D, 2);
            printf("\n\tMoment of inertia about the shifted axis-Z' is: %0.3f mm^4", Iz);
            printf("\n\tDo you want to calculate radius of gyration along shifted axis(Y for yes & N for no): ");
            scanf("%s", &n);
            if (n == 'Y' || n == 'y')
            {
                R3 = sqrt(Iz / Area);
                printf("\tRadius of gyration along shifted axis-Z': %0.3f mm", R3);
            }
            else
            {
                printf("Thank you for using this program");
                break;
            }
            break;
        }

        default:
        {
            printf("Invalid input");
            break;
        }
        }
    }
    else if (ch == 'N')
    {
        printf("Thank you for using this program");
    }
    else
    {
        printf("Invalid input");
    }
}

void circle(float r)
{
    float Area, Icx, Icy, Icz, Ix, Iy, Iz;
    float Rx, Ry, Rz, R1, R2, R3;
    char ch, Axis, n;
    float D;
    Area = 3.141 * r * r;
    Icx = (3.14 * r * r * r * r) / 4;
    Icy = (3.14 * r * r * r * r) / 4;
    Icz = Icx + Icy;
    Rx = sqrt(Icx / Area);
    Ry = sqrt(Icy / Area);
    Rz = sqrt(Icz / Area);

    printf("\n\tMoment of inertia about centroidal X-Axis: %0.3f mm^4", Icx);
    printf("\n\tRadius of gyration about X-Axis: %0.3f mm", Rx);
    printf("\n");

    printf("\n\tMoment of inertia about centroidal Y-Axis: %0.3f mm^4", Icy);
    printf("\n\tRadius of gyration about Y-Axis: %0.3f mm", Ry);
    printf("\n");

    printf("\n\tMoment of inertia about centroidal Z-Axis(polar MOI): %0.3f mm^4", Icz);
    printf("\n\tRadius of gyration about Z-Axis: %0.3f mm", Rz);
    printf("\n");

    printf("\n Do you want to shift the axis:(Y for Yes & N for No): ");
    scanf("%s", &ch);
    if (ch == 'Y')
    {
        printf(" Please choose the axis(X or Y or Z): ");
        scanf("%s", &Axis);
        printf("\tEnter the shift distance (in mm) :");
        scanf("%f", &D);
        switch (Axis)
        {
        case 'X':
        {

            Ix = Icx + Area * pow(D, 2);
            printf("\n\tMoment of inertia about the shifted axis-X' is:%0.3f mm^4", Ix);
            printf("\n Do you want to calculate radius of gyration along shifted axis(Y for yes & N for no): ");
            scanf("%s", &n);
            if (n == 'Y' || n == 'y')
            {
                R1 = sqrt(Ix / Area);
                printf("\tRadius of gyration along shifted axis-X': %0.3f mm", R1);
            }
            else
            {
                printf("Thank you for using this program");
                break;
            }

            break;
        }
        case 'Y':
        {

            Iy = Icy + Area * pow(D, 2);
            printf("\n\tMoment of inertia about the shifted axis-Y' is: %0.3f mm^4", Iy);
            printf("\n\tdo you want to calculate radius of gyration along shifted axis(Y for yes & N for no): ");
            scanf("%s", &n);
            if (n == 'Y' || n == 'y')
            {
                R2 = sqrt(Iy / Area);
                printf("\tRadius of gyration along shifted axis-Y': %0.3f mm", R2);
            }
            else
            {
                printf("Thank you for using this program");
                break;
            }
            break;
        }
        case 'Z':
        {

            Iz = Icz + Area * pow(D, 2);
            printf("\n\tMoment of inertia about the shifted axis-Z' is: %0.3f mm^4", Iz);
            printf("\n\tDo you want to calculate radius of gyration along shifted axis(Y for yes & N for no): ");
            scanf("%s", &n);
            if (n == 'Y' || n == 'y')
            {
                R3 = sqrt(Iz / Area);
                printf("\tRadius of gyration along shifted axis-Z': %0.3f mm", R3);
            }
            else
            {
                printf("Thank you for using this program");
                break;
            }
            break;
        }

        default:
        {
            printf("please enter valid input");
            break;
        }
        }
    }
    else if (ch == 'N')
    {
        printf("Thank you for using this program");
    }
    else
    {
        printf("please enter valid input");
    }
}

void trapazoid(float b, float a, float h)
{
    float Area, Icx, Icy, Icz, Ix, Iy, Iz;
    float Rx, Ry, Rz, R1, R2, R3;
    char ch, Axis, n;
    float D;

    Area = ((a + b) * h) / 2;
    Icx = (h * h * h * ((a * a) + (4 * a * b) + (b * b))) / (36 * (a + b));
    Icy = h * (a + b) * ((a * a) + (b * b)) / 48;
    Icz = Icx + Icy;
    Rx = sqrt(Icx / Area);
    Ry = sqrt(Icy / Area);
    Rz = sqrt(Icz / Area);

    printf("\n\tMoment of inertia about centroidal X-Axis: %0.3f mm^4", Icx);
    printf("\n\tRadius of gyration about X-Axis: %0.3f mm", Rx);
    printf("\n");

    printf("\n\tMoment of inertia about centroidal Y-Axis: %0.3f mm^4", Icy);
    printf("\n\tRadius of gyration about Y-Axis: %0.3f mm", Ry);
    printf("\n");

    printf("\n\tMoment of inertia about centroidal Z-Axis(polar MOI): %0.3f mm^4", Icz);
    printf("\n\tRadius of gyration about Z-Axis: %0.3f mm", Rz);
    printf("\n");

    printf("\n Do you want to shift the axis:(Y for Yes & N for No): ");
    scanf("%s", &ch);
    if (ch == 'Y')
    {
        printf(" Please choose the axis(X or Y or Z): ");
        scanf("%s", &Axis);
        printf("\tEnter the shift distance (in mm) :");
        scanf("%f", &D);
        switch (Axis)
        {
        case 'X':
        {

            Ix = Icx + Area * pow(D, 2);
            printf("\n\tMoment of inertia about the shifted axis-X' is:%0.3f mm^4", Ix);
            printf("\n Do you want to calculate radius of gyration along shifted axis(Y for yes & N for no): ");
            scanf("%s", &n);
            if (n == 'Y' || n == 'y')
            {
                R1 = sqrt(Ix / Area);
                printf("\tRadius of gyration along shifted axis-X': %0.3f mm", R1);
            }
            else
            {
                printf("Thank you for using this program");
                break;
            }

            break;
        }
        case 'Y':
        {

            Iy = Icy + Area * pow(D, 2);
            printf("\n\tMoment of inertia about the shifted axis-Y' is: %0.3f mm^4", Iy);
            printf("\n\tdo you want to calculate radius of gyration along shifted axis(Y for yes & N for no): ");
            scanf("%s", &n);
            if (n == 'Y' || n == 'y')
            {
                R2 = sqrt(Iy / Area);
                printf("\tRadius of gyration along shifted axis-Y': %0.3f mm", R2);
            }
            else
            {
                printf("Thank you for using this program");
                break;
            }
            break;
        }
        case 'Z':
        {

            Iz = Icz + Area * pow(D, 2);
            printf("\n\tMoment of inertia about the shifted axis-Z' is: %0.3f mm^4", Iz);
            printf("\n\tDo you want to calculate radius of gyration along shifted axis(Y for yes & N for no): ");
            scanf("%s", &n);
            if (n == 'Y' || n == 'y')
            {
                R3 = sqrt(Iz / Area);
                printf("\tRadius of gyration along shifted axis-Z': %0.3f mm", R3);
            }
            else
            {
                printf("Thank you for using this program");
                break;
            }
            break;
        }

        default:
        {
            printf("please enter valid input");
            break;
        }
        }
    }
    else if (ch == 'N')
    {
        printf("Thank you for using this program");
    }
    else
    {
        printf("please enter valid input");
    }
}
void semicircle(float r)
{
    float Area, Icx, Icy, Icz, Ib, Ix, Iy, Iz;
    float Rx, Ry, Rz, Rb, R1, R2, R3;
    char ch, Axis, n;
    float D;
    Area = 1.5705 * r * r;
    Icx = 0.11 * pow(r, 4);
    Icy = 0.3926 * pow(r, 4);
    Icz = Icx + Icy;
    Ib = 0.3926 * pow(r, 4);
    Rx = sqrt(Icx / Area);
    Ry = sqrt(Icy / Area);
    Rz = sqrt(Icz / Area);
    Rb = sqrt(Ib / Area);

    printf("\n\tMoment of inertia about centroidal X-Axis: %0.3f mm^4", Icx);
    printf("\n\tRadius of gyration about X-Axis: %0.3f mm", Rx);
    printf("\n");

    printf("\n\tMoment of inertia about centroidal Y-Axis: %0.3f mm^4", Icy);
    printf("\n\tRadius of gyration about Y-Axis: %0.3f mm", Ry);
    printf("\n");

    printf("\n\tMoment of inertia about centroidal Z-Axis(polar MOI): %0.3f mm^4", Icz);
    printf("\n\tRadius of gyration about Z-Axis: %0.3f mm", Rz);
    printf("\n");

    printf("\n\tMoment of inertia about base: %0.3f mm^4", Ib);
    printf("\n\tRadius of gyration about base: %0.3f mm", Rb);
    printf("\n");

    printf("\n");

    printf("\n Do you want to shift the axis:(Y for Yes & N for No): ");
    scanf("%s", &ch);
    if (ch == 'Y')
    {
        printf(" Please choose the axis(X or Y or Z): ");
        scanf("%s", &Axis);
        printf("\tEnter the shift distance (in mm) :");
        scanf("%f", &D);
        switch (Axis)
        {
        case 'X':
        {

            Ix = Icx + Area * pow(D, 2);
            printf("\n\tMoment of inertia about the shifted axis-X' is:%0.3f mm^4", Ix);
            printf("\n Do you want to calculate radius of gyration along shifted axis(Y for yes & N for no): ");
            scanf("%s", &n);
            if (n == 'Y' || n == 'y')
            {
                R1 = sqrt(Ix / Area);
                printf("\tRadius of gyration along shifted axis-X': %0.3f mm", R1);
            }
            else
            {
                printf("Thank you for using this program");
                break;
            }

            break;
        }
        case 'Y':
        {

            Iy = Icy + Area * pow(D, 2);
            printf("\n\tMoment of inertia about the shifted axis-Y' is: %0.3f mm^4", Iy);
            printf("\n\tdo you want to calculate radius of gyration along shifted axis(Y for yes & N for no): ");
            scanf("%s", &n);
            if (n == 'Y' || n == 'y')
            {
                R2 = sqrt(Iy / Area);
                printf("\tRadius of gyration along shifted axis-Y': %0.3f mm", R2);
            }
            else
            {
                printf("Thank you for using this program");
                break;
            }
            break;
        }
        case 'Z':
        {

            Iz = Icz + Area * pow(D, 2);
            printf("\n\tMoment of inertia about the shifted axis-Z' is: %0.3f mm^4", Iz);
            printf("\n\tDo you want to calculate radius of gyration along shifted axis(Y for yes & N for no): ");
            scanf("%s", &n);
            if (n == 'Y' || n == 'y')
            {
                R3 = sqrt(Iz / Area);
                printf("\tRadius of gyration along shifted axis-Z': %0.3f mm", R3);
            }
            else
            {
                printf("Thank you for using this program");
                break;
            }
            break;
        }

        default:
        {
            printf("please enter valid input");
            break;
        }
        }
    }
    else if (ch == 'N')
    {
        printf("Thank you for using this program");
    }
    else
    {
        printf("please enter valid input");
    }
}

void rectcav(float R)
{
    float Icax, Icay, Icaz, Rcx, Rcy, Rcz, area;
    float Itx, Ity, Itz, Rtx, Rty, Rtz;
    float Icx, Icy, Icz, Rx, Ry, Rz, Area;
    Icax = (3.14 * R * R * R * R) / 4;
    Icay = (3.14 * R * R * R * R) / 4;
    Icaz = Icax + Icay;
    area = 3.14 * R * R;
    Rcx = sqrt(Icax / area);
    Rcy = sqrt(Icay / area);
    Rcz = sqrt(Icaz / area);
    printf("\n\tMoment of inertia of Circular Cavity about centroidal X-Axis: %0.3f mm^4", Icax);
    printf("\n\tRadius of gyration of Circular Cavity about X-Axis: %0.3f mm", Rcx);
    printf("\n");

    printf("\n\tMoment of inertia  of Circular Cavity about centroidal Y-Axis: %0.3f mm^4", Icay);
    printf("\n\tRadius of gyration  of Circular Cavity about Y-Axis: %0.3f mm", Rcy);
    printf("\n");

    printf("\n\tMoment of inertia  of Circular Cavity about centroidal Z-Axis(polar MOI): %0.3f mm^4", Icaz);
    printf("\n\tRadius of gyration  of Circular Cavity about Z-Axis: %0.3f mm", Rcz);
    printf("\n\n");

    float b, h;
    printf(" Enter the dimensions of rectangle (in mm) :\n");
    printf(" \tEnter base of rectangle (in mm) :");
    scanf("%f", &b);
    printf(" \tEnter height of rectangle (in mm) :");
    scanf("%f", &h);
    Area = b * h;
    Icx = b * pow(h, 3) / 3;
    Icy = h * pow(b, 3) / 3;
    Icz = Icx + Icy;
    Rx = sqrt(Icx / Area);
    Ry = sqrt(Icy / Area);
    Rz = sqrt(Icz / Area);
    
    printf("\n\tMoment of inertia of Rectangle about centroidal X-Axis: %0.3f mm^4", Icx);
    printf("\n\tRadius of gyration  of Rectangle about X-Axis: %0.3f mm", Rx);
    printf("\n");

    printf("\n\tMoment of inertia  of Rectangle about centroidal Y-Axis: %0.3f mm^4", Icy);
    printf("\n\tRadius of gyration  of Rectangle about Y-Axis: %0.3f mm", Ry);
    printf("\n");

    printf("\n\tMoment of inertia  of Rectangle about centroidal Z-Axis(polar MOI): %0.3f mm^4", Icz);
    printf("\n\tRadius of gyration  of Rectangle about Z-Axis: %0.3f mm", Rz);
    printf("\n\n");
    // t stands for total and ca stands for cavity //
    Itx = Icx - Icax;
    Ity = Icy - Icay;
    Itz = Itx + Ity;
    Rtx = sqrt(Itx / Area);
    Rty = sqrt(Ity / Area);
    Rtz = sqrt(Itz / Area);
    if(Itx<0 || Ity<0 || Itz<0){
        printf("\n\t\tDimensions Of Cavity Out Of Bound");
    }
    else{
    printf("====================================== ");
    printf("\n\t* THE FINAL RESULT IS *\n\n");
    printf("====================================== \n\n");
    printf("\n\tMoment of inertia of Rectangle with Circular Cavity about centroidal X-Axis: %0.3f mm^4", Itx);
    printf("\n\tRadius of gyration of Rectangle with Circular Cavity about X-Axis: %0.3f mm", Rtx);
    printf("\n");

    printf("\n\tMoment of inertia  of Rectangle with Circular Cavity about centroidal Y-Axis: %0.3f mm^4", Ity);
    printf("\n\tRadius of gyration  of Rectangle with Circular Cavity about Y-Axis: %0.3f mm", Rty);
    printf("\n");

    printf("\n\tMoment of inertia  of Rectangle with Circular Cavity about centroidal Z-Axis(polar MOI): %0.3f mm^4", Itz);
    printf("\n\tRadius of gyration  of Rectangle with Circular Cavity about Z-Axis: %0.3f mm", Rtz);
    printf("\n");
 }
}
void triancav(float R)
{
    float r;
    float Icax, Icay, Icaz, Rcx, Rcy, Rcz, area;
    float Itx, Ity, Itz, Rtx, Rty, Rtz;
    float Icx, Icy, Icz, Rx, Ry, Rz, Area;
    Icax = (3.14 * R * R * R * R) / 4;
    Icay = (3.14 * R * R * R * R) / 4;
    Icaz = Icax + Icay;
    area = 3.14 * R * R;
    Rcx = sqrt(Icax / area);
    Rcy = sqrt(Icay / area);
    Rcz = sqrt(Icaz / area);
    printf("\n\tMoment of inertia of Circular Cavity about centroidal X-Axis: %0.3f mm^4", Icax);
    printf("\n\tRadius of gyration of Circular Cavity about X-Axis: %0.3f mm", Rcx);
    printf("\n");

    printf("\n\tMoment of inertia  of Circular Cavity about centroidal Y-Axis: %0.3f mm^4", Icay);
    printf("\n\tRadius of gyration  of Circular Cavity about Y-Axis: %0.3f mm", Rcy);
    printf("\n");

    printf("\n\tMoment of inertia  of Circular Cavity about centroidal Z-Axis(polar MOI): %0.3f mm^4", Icaz);
    printf("\n\tRadius of gyration  of Circular Cavity about Z-Axis: %0.3f mm", Rcz);
    printf("\n\n");

    float b, h;
    printf(" Enter the dimensions of triangle (in mm) :\n");
    printf(" \tEnter base of triangle (in mm) :");
    scanf("%f", &b);
    printf(" \tEnter height of triangle (in mm) :");
    scanf("%f", &h);
    Area = b * h / 2;
    Icx = b * pow(h, 3) / 36;
    Icy = h * pow(b, 3) / 48;
    Icz = Icx + Icy;
    Rx = sqrt(Icx / Area);
    Ry = sqrt(Icy / Area);
    Rz = sqrt(Icz / Area);

    printf("\n\tMoment of inertia of Triangle about centroidal X-Axis: %0.3f mm^4", Icx);
    printf("\n\tRadius of gyration of Triangle about X-Axis: %0.3f mm", Rx);
    printf("\n");

    printf("\n\tMoment of inertia of Triangle about centroidal Y-Axis: %0.3f mm^4", Icy);
    printf("\n\tRadius of gyration of Triangle about Y-Axis: %0.3f mm", Ry);
    printf("\n");

    printf("\n\tMoment of inertia of Triangle about centroidal Z-Axis(polar MOI): %0.3f mm^4", Icz);
    printf("\n\tRadius of gyration of Triangle about Z-Axis: %0.3f mm", Rz);
    printf("\n\n");
    // t stands for total and ca stands for cavity //
    Itx = Icx - Icax;
    Ity = Icy - Icay;
    Itz = Itx + Ity;
    Rtx = sqrt(Itx / Area);
    Rty = sqrt(Ity / Area);
    Rtz = sqrt(Itz / Area);
    if(Itx<0 || Ity<0 || Itz<0){
        printf("\n\t\tDimensions Of Cavity Out Of Bound");
    }
    else{
    printf("====================================== ");
    printf("\n\t* THE FINAL RESULT IS *\n\n");
    printf("====================================== \n\n");
    printf("\n\tMoment of inertia of Triangle with Circular Cavity about centroidal X-Axis: %0.3f mm^4", Itx);
    printf("\n\tRadius of gyration of Triangle with Circular Cavity about X-Axis: %0.3f mm", Rtx);
    printf("\n");

    printf("\n\tMoment of inertia  of Triangle with Circular Cavity about centroidal Y-Axis: %0.3f mm^4", Ity);
    printf("\n\tRadius of gyration  of Triangle with Circular Cavity about Y-Axis: %0.3f mm", Rty);
    printf("\n");

    printf("\n\tMoment of inertia  of Triangle with Circular Cavity about centroidal Z-Axis(polar MOI): %0.3f mm^4", Itz);
    printf("\n\tRadius of gyration  of Triangle with Circular Cavity about Z-Axis: %0.3f mm", Rtz);
    printf("\n");
 }
}
void trapcav(float R)
{
    float r;
    float Icax, Icay, Icaz, Rcx, Rcy, Rcz, area;
    float Itx, Ity, Itz, Rtx, Rty, Rtz;
    float Icx, Icy, Icz, Rx, Ry, Rz, Area;
    Icax = (3.14 * R * R * R * R) / 4;
    Icay = (3.14 * R * R * R * R) / 4;
    Icaz = Icax + Icay;
    area = 3.14 * R * R;
    Rcx = sqrt(Icax / area);
    Rcy = sqrt(Icay / area);
    Rcz = sqrt(Icaz / area);
    printf("\n\tMoment of inertia of Circular Cavity about centroidal X-Axis: %0.3f mm^4", Itx);
    printf("\n\tRadius of gyration of Circular Cavity about X-Axis: %0.3f mm", Rtx);
    printf("\n");

    printf("\n\tMoment of inertia  of Circular Cavity about centroidal Y-Axis: %0.3f mm^4", Ity);
    printf("\n\tRadius of gyration  of Circular Cavity about Y-Axis: %0.3f mm", Rty);
    printf("\n");

    printf("\n\tMoment of inertia  of Circular Cavity about centroidal Z-Axis(polar MOI): %0.3f mm^4", Itz);
    printf("\n\tRadius of gyration  of Circular Cavity about Z-Axis: %0.3f mm", Rtz);
    printf("\n\n");

    float b, a, h;
    printf(" Enter the dimensions of the trapezoid (in mm) :\n");
    printf(" \tEnter the enter longer side of trapezoid (in mm) :");
    scanf("%f", &b);
    printf(" \tEnter the enter shorter side of trapezoid (in mm) :");
    scanf("%f", &a);
    printf(" \tEnter height of the trapezoid (in mm) :");
    scanf("%f", &h);
    Area = ((a + b) * h) / 2;
    Icx = (h * h * h * ((a * a) + (4 * a * b) + (b * b))) / (36 * (a + b));
    Icy = h * (a + b) * ((a * a) + (b * b)) / 48;
    Icz = Icx + Icy;
    Rx = sqrt(Icx / Area);
    Ry = sqrt(Icy / Area);
    Rz = sqrt(Icz / Area);

    printf("\n\tMoment of inertia of Trapezoid about centroidal X-Axis: %0.3f mm^4", Icx);
    printf("\n\tRadius of gyration of Trapezoid about X-Axis: %0.3f mm", Rx);
    printf("\n");

    printf("\n\tMoment of inertia of Trapezoid about centroidal Y-Axis: %0.3f mm^4", Icy);
    printf("\n\tRadius of gyration of Trapezoid about Y-Axis: %0.3f mm", Ry);
    printf("\n");

    printf("\n\tMoment of inertia of Trapezoid about centroidal Z-Axis(polar MOI): %0.3f mm^4", Icz);
    printf("\n\tRadius of gyration of Trapezoid about Z-Axis: %0.3f mm", Rz);
    printf("\n\n");
    // t stands for total and ca stands for cavity //
    Itx = Icx - Icax;
    Ity = Icy - Icay;
    Itz = Itx + Ity;
    Rtx = sqrt(Itx / Area);
    Rty = sqrt(Ity / Area);
    Rtz = sqrt(Itz / Area);
    if(Itx<0 || Ity<0 || Itz<0){
        printf("\n\t\tDimensions Of Cavity Out Of Bound");
    }
    else{
    printf("====================================== ");
    printf("\n\t* THE FINAL RESULT IS *\n\n");
    printf("====================================== \n\n");
    printf("\n\tMoment of inertia of Trapezoid with Circular Cavity about centroidal X-Axis: %0.3f mm^4", Itx);
    printf("\n\tRadius of gyration of Trapezoid with Circular Cavity about X-Axis: %0.3f mm", Rtx);
    printf("\n");

    printf("\n\tMoment of inertia  of Trapezoid with Circular Cavity about centroidal Y-Axis: %0.3f mm^4", Ity);
    printf("\n\tRadius of gyration  of Trapezoid with Circular Cavity about Y-Axis: %0.3f mm", Rty);
    printf("\n");

    printf("\n\tMoment of inertia  of Trapezoid with Circular Cavity about centroidal Z-Axis(polar MOI): %0.3f mm^4", Itz);
    printf("\n\tRadius of gyration  of Trapezoid with Circular Cavity about Z-Axis: %0.3f mm", Rtz);
    printf("\n");
 }
}
void semicircav(float R)
{
    float Icax, Icay, Icaz, Rcx, Rcy, Rcz, area;
    float Itx, Ity, Itz, Rtx, Rty, Rtz;
    float Icx, Icy, Icz, Rx, Ry, Rz, Area;
    Icax = (3.14 * R * R * R * R) / 4;
    Icay = (3.14 * R * R * R * R) / 4;
    Icaz = Icax + Icay;
    area = 3.14 * R * R;
    Rcx = sqrt(Icax / area);
    Rcy = sqrt(Icay / area);
    Rcz = sqrt(Icaz / area);
    printf("\n\tMoment of inertia of Circular Cavity about centroidal X-Axis: %0.3f mm^4", Icax);
    printf("\n\tRadius of gyration of Circular Cavity about X-Axis: %0.3f mm", Rcx);
    printf("\n\n");

    printf("\n\tMoment of inertia  of Circular Cavity about centroidal Y-Axis: %0.3f mm^4", Icay);
    printf("\n\tRadius of gyration  of Circular Cavity about Y-Axis: %0.3f mm", Rcy);
    printf("\n");

    printf("\n\tMoment of inertia  of Circular Cavity about centroidal Z-Axis(polar MOI): %0.3f mm^4", Icaz);
    printf("\n\tRadius of gyration  of Circular Cavity about Z-Axis: %0.3f mm", Rcz);
    printf("\n\n");

    float r, Ib, Rb;
    printf(" \tEnter radius of Semi-circle (in mm) :");
    scanf("%f", &r);
    Area = 1.5705 * r * r;
    Icx = 0.11 * pow(r, 4);
    Icy = 0.3926 * pow(r, 4);
    Icz = Icx + Icy;
    Ib = 0.3926 * pow(r, 4);
    Rx = sqrt(Icx / Area);
    Ry = sqrt(Icy / Area);
    Rz = sqrt(Icz / Area);
    Rb = sqrt(Ib / Area);

    printf("\n\tMoment of inertia of Semi-Circle about centroidal X-Axis: %0.3f mm^4", Icx);
    printf("\n\tRadius of gyration of Semi-Circle about X-Axis: %0.3f mm", Rx);
    printf("\n");

    printf("\n\tMoment of inertia of Semi-Circle about centroidal Y-Axis: %0.3f mm^4", Icy);
    printf("\n\tRadius of gyration of Semi-Circle about Y-Axis: %0.3f mm", Ry);
    printf("\n");

    printf("\n\tMoment of inertia of Semi-Circle about centroidal Z-Axis(polar MOI): %0.3f mm^4", Icz);
    printf("\n\tRadius of gyration of Semi-Circle about Z-Axis: %0.3f mm", Rz);
    printf("\n");

    printf("\n\tMoment of inertia of Semi-Circle about base: %0.3f mm^4", Ib);
    printf("\n\tRadius of gyration of Semi-Circle about base: %0.3f mm", Rb);
    printf("\n\n");

    // t stands for total and ca stands for cavity //

    Itx = Icx - Icax;
    Ity = Icy - Icay;
    Itz = Itx + Ity;
    Rtx = sqrt(Itx / Area);
    Rty = sqrt(Ity / Area);
    Rtz = sqrt(Itz / Area);
    if(Itx<0 || Ity<0 || Itz<0){
        printf("\n\t\tDimensions Of Cavity Out Of Bound");
    }
    else{
    printf("====================================== ");
    printf("\n\t* THE FINAL RESULT IS *\n\n");
    printf("====================================== \n\n");
    printf("\n\tMoment of inertia of Semi-Circle with Circular Cavity about centroidal X-Axis: %0.3f mm^4", Itx);
    printf("\n\tRadius of gyration of Semi-Circle with Circular Cavity about X-Axis: %0.3f mm", Rtx);
    printf("\n");

    printf("\n\tMoment of inertia  of Semi-Circle with Circular Cavity about centroidal Y-Axis: %0.3f mm^4", Ity);
    printf("\n\tRadius of gyration  of Semi-Circle with Circular Cavity about Y-Axis: %0.3f mm", Rty);
    printf("\n");

    printf("\n\tMoment of inertia  of Semi-Circle with Circular Cavity about centroidal Z-Axis(polar MOI): %0.3f mm^4", Itz);
    printf("\n\tRadius of gyration  of Semi-Circle with Circular Cavity about Z-Axis: %0.3f mm", Rtz);
    printf("\n");
 }
}
void circav(float R)
{
    float r;
    float Icax, Icay, Icaz, Rcx, Rcy, Rcz, area;
    float Itx, Ity, Itz, Rtx, Rty, Rtz;
    float Icx, Icy, Icz, Rx, Ry, Rz, Area;
    Icax = (3.14 * R * R * R * R) / 4;
    Icay = (3.14 * R * R * R * R) / 4;
    Icaz = Icax + Icay;
    area = 3.14 * R * R;
    Rcx = sqrt(Icax / area);
    Rcy = sqrt(Icay / area);
    Rcz = sqrt(Icaz / area);
    printf("\n\tMoment of inertia of Circular Cavity about centroidal X-Axis: %0.3f mm^4", Icax);
    printf("\n\tRadius of gyration of Circular Cavity about X-Axis: %0.3f mm", Rcx);
    printf("\n");

    printf("\n\tMoment of inertia  of Circular Cavity about centroidal Y-Axis: %0.3f mm^4", Icay);
    printf("\n\tRadius of gyration  of Circular Cavity about Y-Axis: %0.3f mm", Rcy);
    printf("\n");

    printf("\n\tMoment of inertia  of Circular Cavity about centroidal Z-Axis(polar MOI): %0.3f mm^4", Icaz);
    printf("\n\tRadius of gyration  of Circular Cavity about Z-Axis: %0.3f mm", Rcz);
    printf("\n\n");

    printf("Please enter the radius of the Circle :  ");
    scanf("%f", &r);

    Icx = (3.14 * r * r * r * r) / 4;
    Icy = (3.14 * r * r * r * r) / 4;
    Icz = Icx + Icy;
    Area = 3.14 * r * r;
    Rx = sqrt(Icx / Area);
    Ry = sqrt(Icy / Area);
    Rz = sqrt(Icz / Area);
    printf("\n\tMoment of inertia of Circle about centroidal X-Axis: %0.3f mm^4", Icax);
    printf("\n\tRadius of gyration of Circle about X-Axis: %0.3f mm", Rcx);
    printf("\n");

    printf("\n\tMoment of inertia  of Circle about centroidal Y-Axis: %0.3f mm^4", Icay);
    printf("\n\tRadius of gyration  of Circle about Y-Axis: %0.3f mm", Rcy);
    printf("\n");

    printf("\n\tMoment of inertia  of Circle about centroidal Z-Axis(polar MOI): %0.3f mm^4", Icaz);
    printf("\n\tRadius of gyration  of Circle about Z-Axis: %0.3f mm", Rcz);
    printf("\n\n");
    // t stands for total and ca stands for cavity //
    Itx = Icx - Icax;
    Ity = Icy - Icay;
    Itz = Itx + Ity;
    Rtx = sqrt(Itx / Area);
    Rty = sqrt(Ity / Area);
    Rtz = sqrt(Itz / Area);
    if(Itx<0 || Ity<0 || Itz<0){
        printf("\n\t\tDimensions Of Cavity Out Of Bound");
    }
    else{
    printf("====================================== ");
    printf("\n\t* THE FINAL RESULT IS *\n\n");
    printf("====================================== \n\n");
    printf("\n\tMoment of inertia of Circle with Circular Cavity about centroidal X-Axis: %0.3f mm^4", Icax);
    printf("\n\tRadius of gyration of Circle with Circular Cavity about X-Axis: %0.3f mm", Rcx);
    printf("\n");
    printf("\n\tMoment of inertia  of Circle with Circular Cavity about centroidal Y-Axis: %0.3f mm^4", Icay);
    printf("\n\tRadius of gyration  of Circle with Circular Cavity about Y-Axis: %0.3f mm", Rcy);
    printf("\n");
    printf("\n\tMoment of inertia  of Circle with Circular Cavity about centroidal Z-Axis(polar MOI): %0.3f mm^4", Icaz);
    printf("\n\tRadius of gyration  of Circle with Circular Cavity about Z-Axis: %0.3f mm", Rcz);
    printf("\n");
 }
}

void rect_tcav(float x , float y)
{
    float Icax, Icay, Icaz, Rcx, Rcy, Rcz, area;
    float Itx, Ity, Itz, Rtx, Rty, Rtz;
    float Icx, Icy, Icz, Rx, Ry, Rz, Area;
    Icax = y * pow(x, 3) / 36;
    Icay = x * pow(y, 3) / 48;
    Icaz = Icax + Icay;
    area = 0.5*x*y;
    Rcx = sqrt(Icax / area);
    Rcy = sqrt(Icay / area);
    Rcz = sqrt(Icaz / area);
    printf("\n\tMoment of inertia of triangular Cavity about centroidal X-Axis: %.4f mm^4", Icax);
    printf("\n\tRadius of gyration of triangular Cavity about X-Axis: %0.4f mm", Rcx);
    printf("\n");

    printf("\n\tMoment of inertia  of triangular Cavity about centroidal Y-Axis: %0.4f mm^4", Icay);
    printf("\n\tRadius of gyration  of triangular Cavity about Y-Axis: %0.4f mm", Rcy);
    printf("\n");

    printf("\n\tMoment of inertia  of triangular Cavity about centroidal Z-Axis(polar MOI): %0.4f mm^4", Icaz);
    printf("\n\tRadius of gyration  of triangular Cavity about Z-Axis: %0.4f mm", Rcz);
    printf("\n\n");

    float b, h;
    printf(" Enter the dimensions of rectangle (in mm) :\n");
    printf(" \tEnter base of rectangle (in mm) :");
    scanf("%f", &b);
    printf(" \tEnter height of rectangle (in mm) :");
    scanf("%f", &h);
    Area = b * h;
    Icx = b * pow(h, 3) / 3;
    Icy = h * pow(b, 3) / 3;
    Icz = Icx + Icy;
    Rx = sqrt(Icx / Area);
    Ry = sqrt(Icy / Area);
    Rz = sqrt(Icz / Area);
    
    printf("\n\tMoment of inertia of Rectangle about centroidal X-Axis: %0.3f mm^4", Icx);
    printf("\n\tRadius of gyration  of Rectangle about X-Axis: %0.3f mm", Rx);
    printf("\n");

    printf("\n\tMoment of inertia  of Rectangle about centroidal Y-Axis: %0.3f mm^4", Icy);
    printf("\n\tRadius of gyration  of Rectangle about Y-Axis: %0.3f mm", Ry);
    printf("\n");

    printf("\n\tMoment of inertia  of Rectangle about centroidal Z-Axis(polar MOI): %0.3f mm^4", Icz);
    printf("\n\tRadius of gyration  of Rectangle about Z-Axis: %0.3f mm", Rz);
    printf("\n\n");
    // t stands for total and ca stands for cavity //
    Itx = Icx - Icax;
    Ity = Icy - Icay;
    Itz = Itx + Ity;
    Rtx = sqrt(Itx / Area);
    Rty = sqrt(Ity / Area);
    Rtz = sqrt(Itz / Area);
    if(Itx<0 || Ity<0 || Itz<0){
        printf("\n\t\tDimensions Of Cavity Out Of Bound");
    }
    else{
    printf("====================================== ");
    printf("\n\t* THE FINAL RESULT IS *\n\n");
    printf("====================================== \n\n");
    printf("\n\tMoment of inertia of Rectangle with triangular Cavity about centroidal X-Axis: %0.3f mm^4", Itx);
    printf("\n\tRadius of gyration of Rectangle with triangular Cavity about X-Axis: %0.3f mm", Rtx);
    printf("\n");

    printf("\n\tMoment of inertia  of Rectangle with triangular Cavity about centroidal Y-Axis: %0.3f mm^4", Ity);
    printf("\n\tRadius of gyration  of Rectangle with triangular Cavity about Y-Axis: %0.3f mm", Rty);
    printf("\n");

    printf("\n\tMoment of inertia  of Rectangle with triangular Cavity about centroidal Z-Axis(polar MOI): %0.3f mm^4", Itz);
    printf("\n\tRadius of gyration  of Rectangle with triangular Cavity about Z-Axis: %0.3f mm", Rtz);
    printf("\n");
 }
}
void tri_tcav(float x , float y)
{
    float r;
    float Icax, Icay, Icaz, Rcx, Rcy, Rcz, area;
    float Itx, Ity, Itz, Rtx, Rty, Rtz;
    float Icx, Icy, Icz, Rx, Ry, Rz, Area;
     Icax = y * pow(x, 3) / 36;
    Icay = x * pow(y, 3) / 48;
    Icaz = Icax + Icay;
    area = 0.5*x*y;
    Rcx = sqrt(Icax / area);
    Rcy = sqrt(Icay / area);
    Rcz = sqrt(Icaz / area);
    printf("\n\tMoment of inertia of triangular Cavity about centroidal X-Axis: %0.3f mm^4", Icax);
    printf("\n\tRadius of gyration of triangular Cavity about X-Axis: %0.3f mm", Rcx);
    printf("\n");

    printf("\n\tMoment of inertia  of triangular Cavity about centroidal Y-Axis: %0.3f mm^4", Icay);
    printf("\n\tRadius of gyration  of triangular Cavity about Y-Axis: %0.3f mm", Rcy);
    printf("\n");

    printf("\n\tMoment of inertia  of triangular Cavity about centroidal Z-Axis(polar MOI): %0.3f mm^4", Icaz);
    printf("\n\tRadius of gyration  of triangular Cavity about Z-Axis: %0.3f mm", Rcz);
    printf("\n\n");

    float b, h;
    printf(" Enter the dimensions of triangle (in mm) :\n");
    printf(" \tEnter base of triangle (in mm) :");
    scanf("%f", &b);
    printf(" \tEnter height of triangle (in mm) :");
    scanf("%f", &h);
    Area = b * h / 2;
    Icx = b * pow(h, 3) / 36;
    Icy = h * pow(b, 3) / 48;
    Icz = Icx + Icy;
    Rx = sqrt(Icx / Area);
    Ry = sqrt(Icy / Area);
    Rz = sqrt(Icz / Area);

    printf("\n\tMoment of inertia of Triangle about centroidal X-Axis: %0.3f mm^4", Icx);
    printf("\n\tRadius of gyration of Triangle about X-Axis: %0.3f mm", Rx);
    printf("\n");

    printf("\n\tMoment of inertia of Triangle about centroidal Y-Axis: %0.3f mm^4", Icy);
    printf("\n\tRadius of gyration of Triangle about Y-Axis: %0.3f mm", Ry);
    printf("\n");

    printf("\n\tMoment of inertia of Triangle about centroidal Z-Axis(polar MOI): %0.3f mm^4", Icz);
    printf("\n\tRadius of gyration of Triangle about Z-Axis: %0.3f mm", Rz);
    printf("\n\n");
    // t stands for total and ca stands for cavity //
    Itx = Icx - Icax;
    Ity = Icy - Icay;
    Itz = Itx + Ity;
    Rtx = sqrt(Itx / Area);
    Rty = sqrt(Ity / Area);
    Rtz = sqrt(Itz / Area);
    if(Itx<0 || Ity<0 || Itz<0){
        printf("\n\t\tDimensions Of Cavity Out Of Bound");
    }
    else{
    printf("====================================== ");
    printf("\n\t* THE FINAL RESULT IS *\n\n");
    printf("====================================== \n\n");
    printf("\n\tMoment of inertia of Triangle with triangular Cavity about centroidal X-Axis: %0.3f mm^4", Itx);
    printf("\n\tRadius of gyration of Triangle with triangular Cavity about X-Axis: %0.3f mm", Rtx);
    printf("\n");

    printf("\n\tMoment of inertia  of Triangle with triangular Cavity about centroidal Y-Axis: %0.3f mm^4", Ity);
    printf("\n\tRadius of gyration  of Triangle with triangular Cavity about Y-Axis: %0.3f mm", Rty);
    printf("\n");

    printf("\n\tMoment of inertia  of Triangle with triangular Cavity about centroidal Z-Axis(polar MOI): %0.3f mm^4", Itz);
    printf("\n\tRadius of gyration  of Triangle with triangular Cavity about Z-Axis: %0.3f mm", Rtz);
    printf("\n");
 }
}
void trap_tcav(float x , float y)
{
    float r;
    float Icax, Icay, Icaz, Rcx, Rcy, Rcz, area;
    float Itx, Ity, Itz, Rtx, Rty, Rtz;
    float Icx, Icy, Icz, Rx, Ry, Rz, Area;
     Icax = y * pow(x, 3) / 36;
    Icay = x * pow(y, 3) / 48;
    Icaz = Icax + Icay;
    area = 0.5*x*y;
    Rcx = sqrt(Icax / area);
    Rcy = sqrt(Icay / area);
    Rcz = sqrt(Icaz / area);
    printf("\n\tMoment of inertia of triangular Cavity about centroidal X-Axis: %0.3f mm^4", Itx);
    printf("\n\tRadius of gyration of triangular Cavity about X-Axis: %0.3f mm", Rtx);
    printf("\n");

    printf("\n\tMoment of inertia  of triangular Cavity about centroidal Y-Axis: %0.3f mm^4", Ity);
    printf("\n\tRadius of gyration  of triangular Cavity about Y-Axis: %0.3f mm", Rty);
    printf("\n");

    printf("\n\tMoment of inertia  of triangular Cavity about centroidal Z-Axis(polar MOI): %0.3f mm^4", Itz);
    printf("\n\tRadius of gyration  of triangular Cavity about Z-Axis: %0.3f mm", Rtz);
    printf("\n\n");

    float b, a, h;
    printf(" Enter the dimensions of the trapezoid (in mm) :\n");
    printf(" \tEnter the enter longer side of trapezoid (in mm) :");
    scanf("%f", &b);
    printf(" \tEnter the enter shorter side of trapezoid (in mm) :");
    scanf("%f", &a);
    printf(" \tEnter height of the trapezoid (in mm) :");
    scanf("%f", &h);
    Area = ((a + b) * h) / 2;
    Icx = (h * h * h * ((a * a) + (4 * a * b) + (b * b))) / (36 * (a + b));
    Icy = h * (a + b) * ((a * a) + (b * b)) / 48;
    Icz = Icx + Icy;
    Rx = sqrt(Icx / Area);
    Ry = sqrt(Icy / Area);
    Rz = sqrt(Icz / Area);

    printf("\n\tMoment of inertia of Trapezoid about centroidal X-Axis: %0.3f mm^4", Icx);
    printf("\n\tRadius of gyration of Trapezoid about X-Axis: %0.3f mm", Rx);
    printf("\n");

    printf("\n\tMoment of inertia of Trapezoid about centroidal Y-Axis: %0.3f mm^4", Icy);
    printf("\n\tRadius of gyration of Trapezoid about Y-Axis: %0.3f mm", Ry);
    printf("\n");

    printf("\n\tMoment of inertia of Trapezoid about centroidal Z-Axis(polar MOI): %0.3f mm^4", Icz);
    printf("\n\tRadius of gyration of Trapezoid about Z-Axis: %0.3f mm", Rz);
    printf("\n\n");
    // t stands for total and ca stands for cavity //
    Itx = Icx - Icax;
    Ity = Icy - Icay;
    Itz = Itx + Ity;
    Rtx = sqrt(Itx / Area);
    Rty = sqrt(Ity / Area);
    Rtz = sqrt(Itz / Area);
    if(Itx<0 || Ity<0 || Itz<0){
        printf("\n\t\tDimensions Of Cavity Out Of Bound");
    }
    else{
    printf("====================================== ");
    printf("\n\t* THE FINAL RESULT IS *\n\n");
    printf("====================================== \n\n");
    printf("\n\tMoment of inertia of Trapezoid with triangular Cavity about centroidal X-Axis: %0.3f mm^4", Itx);
    printf("\n\tRadius of gyration of Trapezoid with triangular Cavity about X-Axis: %0.3f mm", Rtx);
    printf("\n");

    printf("\n\tMoment of inertia  of Trapezoid with triangular Cavity about centroidal Y-Axis: %0.3f mm^4", Ity);
    printf("\n\tRadius of gyration  of Trapezoid with triangular Cavity about Y-Axis: %0.3f mm", Rty);
    printf("\n");

    printf("\n\tMoment of inertia  of Trapezoid with triangular Cavity about centroidal Z-Axis(polar MOI): %0.3f mm^4", Itz);
    printf("\n\tRadius of gyration  of Trapezoid with triangular Cavity about Z-Axis: %0.3f mm", Rtz);
    printf("\n");
 }
}
void semi_tcav(float x , float y)
{
    float Icax, Icay, Icaz, Rcx, Rcy, Rcz, area;
    float Itx, Ity, Itz, Rtx, Rty, Rtz;
    float Icx, Icy, Icz, Rx, Ry, Rz, Area;
   Icax = y * pow(x, 3) / 36;
    Icay = x * pow(y, 3) / 48;
    Icaz = Icax + Icay;
    area = 0.5*x*y;
    Rcx = sqrt(Icax / area);
    Rcy = sqrt(Icay / area);
    Rcz = sqrt(Icaz / area);
    printf("\n\tMoment of inertia of triangular Cavity about centroidal X-Axis: %0.3f mm^4", Icax);
    printf("\n\tRadius of gyration of triangular Cavity about X-Axis: %0.3f mm", Rcx);
    printf("\n\n");

    printf("\n\tMoment of inertia  of triangular Cavity about centroidal Y-Axis: %0.3f mm^4", Icay);
    printf("\n\tRadius of gyration  of triangular Cavity about Y-Axis: %0.3f mm", Rcy);
    printf("\n");

    printf("\n\tMoment of inertia  of triangular Cavity about centroidal Z-Axis(polar MOI): %0.3f mm^4", Icaz);
    printf("\n\tRadius of gyration  of triangular Cavity about Z-Axis: %0.3f mm", Rcz);
    printf("\n\n");

    float r, Ib, Rb;
    printf(" \tEnter radius of Semi-circle (in mm) :");
    scanf("%f", &r);
    Area = 1.5705 * r * r;
    Icx = 0.11 * pow(r, 4);
    Icy = 0.3926 * pow(r, 4);
    Icz = Icx + Icy;
    Ib = 0.3926 * pow(r, 4);
    Rx = sqrt(Icx / Area);
    Ry = sqrt(Icy / Area);
    Rz = sqrt(Icz / Area);
    Rb = sqrt(Ib / Area);

    printf("\n\tMoment of inertia of Semi-Circle about centroidal X-Axis: %0.3f mm^4", Icx);
    printf("\n\tRadius of gyration of Semi-Circle about X-Axis: %0.3f mm", Rx);
    printf("\n");

    printf("\n\tMoment of inertia of Semi-Circle about centroidal Y-Axis: %0.3f mm^4", Icy);
    printf("\n\tRadius of gyration of Semi-Circle about Y-Axis: %0.3f mm", Ry);
    printf("\n");

    printf("\n\tMoment of inertia of Semi-Circle about centroidal Z-Axis(polar MOI): %0.3f mm^4", Icz);
    printf("\n\tRadius of gyration of Semi-Circle about Z-Axis: %0.3f mm", Rz);
    printf("\n");

    printf("\n\tMoment of inertia of Semi-Circle about base: %0.3f mm^4", Ib);
    printf("\n\tRadius of gyration of Semi-Circle about base: %0.3f mm", Rb);
    printf("\n\n");

    // t stands for total and ca stands for cavity //

    Itx = Icx - Icax;
    Ity = Icy - Icay;
    Itz = Itx + Ity;
    Rtx = sqrt(Itx / Area);
    Rty = sqrt(Ity / Area);
    Rtz = sqrt(Itz / Area);
    if(Itx<0 || Ity<0 || Itz<0){
        printf("\n\t\tDimensions Of Cavity Out Of Bound");
    }
    else{
    printf("====================================== ");
    printf("\n\t* THE FINAL RESULT IS *\n\n");
    printf("====================================== \n\n");
    printf("\n\tMoment of inertia of Semi-Circle with triangular Cavity about centroidal X-Axis: %0.3f mm^4", Itx);
    printf("\n\tRadius of gyration of Semi-Circle with triangular Cavity about X-Axis: %0.3f mm", Rtx);
    printf("\n");

    printf("\n\tMoment of inertia  of Semi-Circle with triangular Cavity about centroidal Y-Axis: %0.3f mm^4", Ity);
    printf("\n\tRadius of gyration  of Semi-Circle with triangular Cavity about Y-Axis: %0.3f mm", Rty);
    printf("\n");

    printf("\n\tMoment of inertia  of Semi-Circle with triangular Cavity about centroidal Z-Axis(polar MOI): %0.3f mm^4", Itz);
    printf("\n\tRadius of gyration  of Semi-Circle with triangular Cavity about Z-Axis: %0.3f mm", Rtz);
    printf("\n");
 }
}
void circle_tcav(float x , float y)
{
    float r;
    float Icax, Icay, Icaz, Rcx, Rcy, Rcz, area;
    float Itx, Ity, Itz, Rtx, Rty, Rtz;
    float Icx, Icy, Icz, Rx, Ry, Rz, Area;
    Icax = y * pow(x, 3) / 36;
    Icay = x * pow(y, 3) / 48;
    Icaz = Icax + Icay;
    area = 0.5*x*y;
    Rcx = sqrt(Icax / area);
    Rcy = sqrt(Icay / area);
    Rcz = sqrt(Icaz / area);
    printf("\n\tMoment of inertia of triangular Cavity about centroidal X-Axis: %0.3f mm^4", Icax);
    printf("\n\tRadius of gyration of triangular Cavity about X-Axis: %0.3f mm", Rcx);
    printf("\n");

    printf("\n\tMoment of inertia  of triangular Cavity about centroidal Y-Axis: %0.3f mm^4", Icay);
    printf("\n\tRadius of gyration  of triangular Cavity about Y-Axis: %0.3f mm", Rcy);
    printf("\n");

    printf("\n\tMoment of inertia  of triangular Cavity about centroidal Z-Axis(polar MOI): %0.3f mm^4", Icaz);
    printf("\n\tRadius of gyration  of triangular Cavity about Z-Axis: %0.3f mm", Rcz);
    printf("\n\n");

    printf("Please enter the radius of the Circle :  ");
    scanf("%f", &r);

    Icx = (3.14 * r * r * r * r) / 4;
    Icy = (3.14 * r * r * r * r) / 4;
    Icz = Icx + Icy;
    Area = 3.14 * r * r;
    Rx = sqrt(Icx / Area);
    Ry = sqrt(Icy / Area);
    Rz = sqrt(Icz / Area);
    printf("\n\tMoment of inertia of Circle about centroidal X-Axis: %0.3f mm^4", Icax);
    printf("\n\tRadius of gyration of Circle about X-Axis: %0.3f mm", Rcx);
    printf("\n");

    printf("\n\tMoment of inertia  of Circle about centroidal Y-Axis: %0.3f mm^4", Icay);
    printf("\n\tRadius of gyration  of Circle about Y-Axis: %0.3f mm", Rcy);
    printf("\n");

    printf("\n\tMoment of inertia  of Circle about centroidal Z-Axis(polar MOI): %0.3f mm^4", Icaz);
    printf("\n\tRadius of gyration  of Circle about Z-Axis: %0.3f mm", Rcz);
    printf("\n\n");
    // t stands for total and ca stands for cavity //
    Itx = Icx - Icax;
    Ity = Icy - Icay;
    Itz = Itx + Ity;
    Rtx = sqrt(Itx / Area);
    Rty = sqrt(Ity / Area);
    Rtz = sqrt(Itz / Area);
    if(Itx<0 || Ity<0 || Itz<0){
        printf("\n\t\tDimensions Of Cavity Out Of Bound");
    }
    else{
    printf("====================================== ");
    printf("\n\t* THE FINAL RESULT IS *\n\n");
    printf("====================================== \n\n");
    printf("\n\tMoment of inertia of Circle with triangular Cavity about centroidal X-Axis: %0.3f mm^4", Icax);
    printf("\n\tRadius of gyration of Circle with triangular Cavity about X-Axis: %0.3f mm", Rcx);
    printf("\n");
    printf("\n\tMoment of inertia  of Circle with triangular Cavity about centroidal Y-Axis: %0.3f mm^4", Icay);
    printf("\n\tRadius of gyration  of Circle with triangular Cavity about Y-Axis: %0.3f mm", Rcy);
    printf("\n");
    printf("\n\tMoment of inertia  of Circle with triangular Cavity about centroidal Z-Axis(polar MOI): %0.3f mm^4", Icaz);
    printf("\n\tRadius of gyration  of Circle with triangular Cavity about Z-Axis: %0.3f mm", Rcz);
    printf("\n");
 }
}