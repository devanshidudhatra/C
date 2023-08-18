#include <stdio.h>
#include <string.h>

// Define a structure for student data
struct Student {
    int rollNumber;
    char name[5];
    float marks;
};

int main() {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Declare an array of structures to hold student data
    struct Student students[numStudents];

    // Input student data
    for (int i = 0; i < numStudents; i++) {
        printf("Enter details for student %d:\n", i + 1);
        students[i].rollNumber = i + 1;

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display student data using pointers
    printf("\nStudent Data:\n");
    for (int i = 0; i < numStudents; i++) {
        struct Student *studentPtr = &students[i]; // Pointer to current student

        printf("Roll Number: %d\n", studentPtr->rollNumber);
        printf("Name: %s\n", studentPtr->name);
        printf("Marks: %.2f\n\n", studentPtr->marks);
    }

    return 0;
}
