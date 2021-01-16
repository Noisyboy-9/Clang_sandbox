#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "Student/student.h"

void program_loop();

void handle_sort_by_name(Student *head);

void linked_list_swap(Student *first_node, Student *second_node);

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

void handle_sort_by_name(Student *head) {
//    implementing bubble sort for linked list items
    Student *current_student;
    Student *next_student;
    for (current_student = head; current_student != NULL; current_student = current_student->next) {
        for (next_student = current_student->next; next_student != NULL; next_student = next_student->next) {
            if (strcmp(current_student->name, next_student->name) > 0) {
                linked_list_swap(current_student, next_student);
            }
        }
    }
}

void linked_list_swap(Student *first_node, Student *second_node) {
//    making a backup of first_node data
    int temp_id = first_node->id;

    char temp_name[MAX_STUDENT_NAME_LENGTH];
    strcpy(temp_name, first_node->name);

    char temp_email[MAX_STUDENT_EMAIL_LENGTH];
    strcpy(temp_email, first_node->email);

    char temp_password[MAX_STUDENT_PASSWORD_LENGTH];
    strcpy(temp_password, first_node->password);

//    changing the values
    first_node->id = second_node->id;
    strcpy(first_node->name, second_node->name);
    strcpy(first_node->email, second_node->email);
    strcpy(first_node->password, second_node->password);

//    setting seconds node to have first node data
    second_node->id = temp_id;
    strcpy(second_node->name, temp_name);
    strcpy(second_node->email, temp_email);
    strcpy(second_node->password, temp_password);
}


