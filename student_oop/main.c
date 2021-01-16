#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "Student/student.h"

void program_loop();

void handle_print_students(Student *head);

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

            default:
                choice = ORDER_CANCEL;
                break;
        }

    } while (choice != ORDER_CANCEL);

//    user entered cancel order
    printf("goodbye :)");
}

void handle_print_students(Student *head) {
    if (!head) {
        printf("No students have been registered!");
        return;
    }

    Student *iteration_node = head;
    while (iteration_node) {
        printf("-------------------\n");
        printf("id: %d\n", iteration_node->id);
        printf("name : %s\n", iteration_node->name);
        printf("email : %s\n", iteration_node->email);
        printf("password: %s\n", iteration_node->password);
        printf("-------------------\n");

        iteration_node = iteration_node->next;
    }
}


