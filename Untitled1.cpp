#include <stdio.h>

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    if (scanf(" %c", &operator) != 1) { 
        printf("Invalid input for operator.\n");
        return 1;
    }

    printf("Enter two operands: ");
    if (scanf("%lf %lf", &num1, &num2) != 2) {
        printf("Invalid input for numbers.\n");
        return 1;
    }

    switch (operator) {
        case '+':
            result = add(num1, num2);
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = subtract(num1, num2);
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = multiply(num1, num2);
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            if (num2 != 0) {
                result = divide(num1, num2);
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error! The operator is not valid.\n");
            break;
    }

    return 0;
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}
