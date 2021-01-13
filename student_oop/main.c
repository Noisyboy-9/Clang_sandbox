#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "Student/student.h"

void program_loop();

int main() {
    program_loop();
    return 0;
}

void program_loop() {
    int choice;
    Student *head = NULL;

    do {
        show_menu();
        choice = get_user_order();

        switch (choice) {
            case ORDER_ADD:
                head = handle_add_student(head);
                break;
        }

    } while (choice != ORDER_CANCEL);

//    user entered cancel order
    printf("goodbye :)");

}


