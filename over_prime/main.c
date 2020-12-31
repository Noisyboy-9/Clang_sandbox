#include <stdio.h>
#include <math.h>
#include <z3.h>

int count_digits(int number);

bool is_prime(int number);

int main() {
    int input_number;
    scanf("%d", &input_number);

    int number_of_digits = count_digits(input_number);

    for (int i = 1; i <= number_of_digits; ++i) {
        int divider = pow(10, i);
        int number = input_number % divider;

        if (!is_prime(number)) {
            printf("false\n");
            return 0;
        }
    }

    printf("%d\n", is_prime(22));
    return 0;
}

bool is_prime(int number) {
    for (int i = 2; i < number; ++i) {
        if (!number % i) {
            return false;
        }
    }

    return true;
}

int count_digits(int number) {
    int power = 1;
    int divider = 10;
    while (number / divider != 0) {
        divider *= 10;
        power++;
    }

    return power;
}
