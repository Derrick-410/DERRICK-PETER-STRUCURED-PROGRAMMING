#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    float num1;
    float num2;
    float answer;

    printf("Choose an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter your first number: ");
    scanf("%f", &num1);

    printf("Enter your second number: ");
    scanf("%f", &num2);

    if (op == '+') {
        answer = num1 + num2;
        printf("The answer is: %f\n", answer);
    }
    else if (op == '-') {
        answer = num1 - num2;
        printf("The answer is: %f\n", answer);
    }
    else if (op == '*') {
        answer = num1 * num2;
        printf("The answer is: %f\n", answer);
    }
    else if (op == '/') {
        answer = num1 / num2;
        printf("The answer is: %f\n", answer);
    }
    else {
        printf("Error! You did not type a valid math symbol.\n");
    }
    return 0;
}
