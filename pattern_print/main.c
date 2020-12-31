#include <stdio.h>

void number_pattern_print(int limit);

int main() {
    int limit;
    scanf("%d", &limit);
    number_pattern_print(limit);
    return 0;
}

void number_pattern_print(int limit) {
    for (int i = 1; i <= limit; ++i) {
        int number_of_spaces = (2 * limit) - 3;
        int space = number_of_spaces;
//     print the right side
        for (int j = 1; j <= i; ++j) {
            printf("%d", j);
        }
//      print space between
        for (; space >= 1; space -= 2) {
            for (int k = 1; k <= space; ++k) {
                printf(" ");
            }
            break;
        }


//     print the left side

        for (int j = i; j >= 1; --j) {
            if (j == limit) {
                continue;
            }

            if (j == 1) {
                printf("1\n");
                continue;
            }

            printf("%d", j);
        }
    }
}