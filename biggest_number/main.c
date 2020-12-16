#include <stdio.h>

int main() {
    int limit;
    scanf("%d", &limit);

    int biggest_number, input_number;
    scanf("%d", &input_number);
    biggest_number = input_number;

    for (int counter = 0; counter < limit - 1; ++counter) {
        scanf("%d", &input_number);

        if (input_number > biggest_number) {
            biggest_number = input_number;
        }
    }

    printf("%d", biggest_number);
    return 0;
}
