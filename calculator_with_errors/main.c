#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    double number1, number2, result;
    char operator;

    printf("Choose operation to perform (+, -, *, /, %%, sin, cos, tan, ): ");
    scanf(" %c", &operator);


    printf("Enter first number:");
    scanf("%lf", &number1);
    printf("Enter second number:");
    scanf("%lf", &number2);


    if (operator == '+') {
        result = number1 + number2;
    } else if (operator == '-') {
        result = number1 - number2;
    } else if (operator == '*') {
        result = number1 * number2;
    } else if (operator == '/') {
        if (number2 == 0) {
            printf("invalid input! divide by zero");
            return -1;
        } else {
            result = number1 / number2;
        }
    } else if (operator == '%') {
        result = (int) number1 % (int) number2;
    } else if (operator == 's') {
        result = sin(number1 / number2);
    } else if (operator == 'c') {
        result = cos(number1 / number2);
    } else if (operator == 't') {
        result = tan(number1 / number2);
    }

    if (operator == 's') {
        printf("result : sin(%f/%f) = %lf", number1, number2, result);
    } else if (operator == 'c') {
        printf("result : cos(%f/%f) = %lf", number1, number2, result);
    } else if (operator == 't') {
        printf("result : tan(%f/%f) = %lf", number1, number2, result);
    } else {
        printf("result : %f %c %f = %lf", number1, operator, number2, result);
    }

    return 0;
}
