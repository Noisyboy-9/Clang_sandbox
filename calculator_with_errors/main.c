#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    double number1, number2, result;
    char operator;

    printf("Choose operation to perform (+, -, *, /, %%, sin, cos, tan, :");
    scanf("%c", &operator);


    printf("Enter first number:");
    scanf("%lf", &number1);
    printf("Enter second number:");
    scanf("%lf", &number2);


    switch (operator) {
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            if (number2 == 0) {
                printf("invalid input! divide by zero");
                return -1;
            }
            result = number1 / number2;
            break;
        case '%':
            result = (int) number1 % (int) number2;
            break;
        case 's' :
            result = sin(number1 / number2);
            break;
        case 'c' :
            result = cos(number1 / number2);
            break;
        case 't' :
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
