#include <stdio.h>

int main(void) {
    int n;
    char reg_no[50];
    char name[100];
    float marks;
    char grade;

    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\n--- Enter Details for Student %d ---\n", i + 1);
        printf("Registration No: ");
        scanf("%49s", reg_no);
        printf("Name: ");
        scanf("%99s", name);
        printf("Marks: ");
        scanf("%f", &marks);

        /* Grade determination using if-else if-else */
        if (marks >= 70.0f && marks <= 100.0f) {
            grade = 'A';
        } else if (marks >= 60.0f) {
            grade = 'B';
        } else if (marks >= 50.0f) {
            grade = 'C';
        } else if (marks >= 40.0f) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        /* Formatted Output */
        printf("\nSTUDENT INFORMATION\n");
        printf("Registration No: %s\n", reg_no);
        printf("Name: %s\n", name);
        printf("Marks: %.2f\n", marks);
        printf("Grade: %c\n", grade);

        /* Pass / Fail evaluation */
        if (marks >= 40.0f) {
            printf("Status: Pass\n");
        } else {
            printf("Status: Fail\n");
        }
    }

    return 0;
}
