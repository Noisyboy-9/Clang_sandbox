#include <stdio.h>
#include <stdbool.h>

#define init_cake_num 40
#define init_cookie_num 40
#define init_coffee_num 40

int choice;

void menu(int cake, int cookie, int coffee) {
    printf("What do you want to order?\n");
    printf("1) cake : %d\n", cake);
    printf("2) cookie : %d\n", cookie);
    printf("3) coffee : %d\n", coffee);
}

void buy() {

    scanf("%d", &choice);

    /* local variable declaration */
    int pic = 0;

    /* static variable declaration */
    static int cake_order_count = 0; // no need to init with zero just doing for making things clear
    static int cookie_order_count = 0;
    static int coffee_order_count = 0;


    switch (choice) {
        case 1:
            cake_order_count++;
            menu(
                    init_cake_num - cake_order_count,
                    init_cookie_num - cookie_order_count,
                    init_coffee_num - coffee_order_count
            );
            break;
        case 2:
            cookie_order_count++;
            menu(
                    init_cake_num - cake_order_count,
                    init_cookie_num - cookie_order_count,
                    init_coffee_num - coffee_order_count
            );
            break;

        case 3:
            coffee_order_count++;
            menu(
                    init_cake_num - cake_order_count,
                    init_cookie_num - cookie_order_count,
                    init_coffee_num - coffee_order_count
            );
            break;

        default:
            printf("Do you want a picture?\n1) yes\n0) no\n");
            int a;
            scanf("%d", &a);
            if (a) {
                pic++;
            }
    }

    printf("pic num = %d\n", pic);
}

int main() {

    menu(init_cake_num, init_cookie_num, init_coffee_num);

    while (choice != 5) {
        buy();
    }

    printf("C U soon\n");
    return 0;
}