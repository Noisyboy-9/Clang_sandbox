#include <stdio.h>
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
            case ORDER_DELETE:
                head = handle_delete_student(head);
                break;
            case ORDER_PRINT_STUDENTS:
                handle_print_students(head);
                break;
            case ORDER_SORT:
//                this is the star mark part
                handle_sort_by_name(head);
                break;
            default:
                choice = ORDER_CANCEL;
                break;
        }

    } while (choice != ORDER_CANCEL);

//    user entered cancel order
    printf("goodbye :)");
}


