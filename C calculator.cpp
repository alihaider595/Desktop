#include <stdio.h>

struct Calculator {
    double num1;
    double num2;
    char op;
};

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    struct Calculator calc;   

    
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &calc.op);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &calc.num1, &calc.num2);

    switch(calc.op) {
        case '+':
            printf("Result = %.2lf\n", add(calc.num1, calc.num2));
            break;
        case '-':
            printf("Result = %.2lf\n", subtract(calc.num1, calc.num2));
            break;
        case '*':
            printf("Result = %.2lf\n", multiply(calc.num1, calc.num2));
            break;
        case '/':
            if (calc.num2 != 0)
                printf("Result = %.2lf\n", divide(calc.num1, calc.num2));
            else
                printf("Error: Division by zero not allowed!\n");
            break;
        default:
            printf("Invalid operator!\n");
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

