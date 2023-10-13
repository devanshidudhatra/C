#include <stdio.h>

struct student {
    char name[20];
    int roll_no;
    float cpi;
};

int main() {
    struct student *P[2], S, T; 
    P[0] = &S;
    P[1] = &T;

    printf("==== Student Details Entry ====\n");

    for (int i = 0; i < 2; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter the name: ");
        scanf("%s", P[i]->name);
        printf("Enter the roll number: ");
        scanf("%d", &P[i]->roll_no);
        printf("Enter the CPI: ");
        scanf("%f", &P[i]->cpi);
    }

    printf("\n==== Entered Details ====\n");
    for (int i = 0; i < 2; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", P[i]->name);
        printf("Roll Number: %d\n", P[i]->roll_no);
        printf("CPI: %.2f\n", P[i]->cpi);
        printf("\n");
    }

    return 0;
}
