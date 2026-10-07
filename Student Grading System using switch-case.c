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

        /* Grade determination using switch statement via integer division */
        int bracket = (int)marks / 10;

        switch (bracket) {
            case 10:
            case 9:
            case 8:
            case 7:
                grade = 'A';
                break;
            case 6:
                grade = 'B';
                break;
            case 5:
                grade = 'C';
                break;
            case 4:
                grade = 'D';
                break;
            default:
                grade = 'F';
                break;
        }

        /* Formatted Output */
        printf("\nSTUDENT INFORMATION\n");
        printf("Registration No: %s\n", reg_no);
        printf("Name: %s\n", name);
        printf("Marks: %.2f\n", marks);
        printf("Grade: %c\n", grade);

        /* Performance classification using switch statement */
        switch (grade) {
            case 'A':
            case 'B':
            case 'C':
            case 'D':
                printf("Status: Pass\n");
                break;
            default:
                printf("Status: Fail\n");
                break;
        }
    }

    return 0;
}
