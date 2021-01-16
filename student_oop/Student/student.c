#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "student.h"

Student *last_student(Student *head);

Student *delete_from_beginning(Student *head);

void delete_from_end(Student *head);

void delete_from_middle(Student *head, char *email);


Student *handle_add_student(Student *head) {
    printf("please input student name: ");
    char name[MAX_STUDENT_NAME_LENGTH];
    fgets(name, MAX_STUDENT_NAME_LENGTH, stdin);
    sanitize_input_string(name);

    printf("please input student email address: ");
    char email[MAX_STUDENT_EMAIL_LENGTH];
    fgets(email, MAX_STUDENT_EMAIL_LENGTH, stdin);
    sanitize_input_string(email);

    if (find_student(head, email)) {
        printf("student with specified email already exist!\n");
        return head;
    }

    printf("please input student password: ");
    char password[MAX_STUDENT_PASSWORD_LENGTH];
    fgets(password, MAX_STUDENT_PASSWORD_LENGTH, stdin);
    sanitize_input_string(password);

    if (!head) {
//        create first student
        head = (Student *) calloc(1, sizeof(Student));
        head->id = 1;
        strcpy(head->name, name);
        strcpy(head->email, email);
        strcpy(head->password, password);
        head->next = NULL;
        printf("student added successfully!\n");
        return head;
    }
//
    Student *last_student = find_tale(head);

//    init new_student
    Student *new_student = (Student *) calloc(1, sizeof(Student));
    last_student->next = new_student;
    new_student->id = last_student->id + 1;
    strcpy(new_student->name, name);
    strcpy(new_student->email, email);
    strcpy(new_student->password, password);
    new_student->next = NULL;

//    connect new student to other saved students
    last_student->next = new_student;

    printf("student added successfully!\n");
    return head;
}

Student *find_tale(Student *head) {
    Student *current = head;

    while (current && current->next) {
        current = current->next;
    }

    return current;
}

Student *find_student(Student *head, char *email) {
    if (!head) {
//        no student exist
        return NULL;
    }

    Student *iteration_node = head;
    while (iteration_node) {
        if (strcmp(iteration_node->email, email) == 0) {
            return iteration_node;
        }

        iteration_node = iteration_node->next;
    }

//    nothing has been found
    return NULL;
}

void sanitize_input_string(char *name) {
    unsigned long int length = strlen(name);
    name[length - 1] = '\0';
}

int get_user_order() {
    printf("please input your order :");
    int order;
    scanf("%d", &order);
    getchar();

    while (!is_valid_order(order)) {
        printf("bad input please enter valid order : ");
        scanf("%d", &order);
        getchar();
    }

    return order;
}

bool is_valid_order(int order) {
    return order == ORDER_ADD ||
           order == ORDER_DELETE ||
           order == ORDER_PRINT_STUDENTS ||
           order == ORDER_SORT ||
           order == ORDER_CANCEL;
}

void show_menu() {
    printf("%d) add student\n", ORDER_ADD);
    printf("%d) delete student\n", ORDER_DELETE);
    printf("%d) sort students by name\n", ORDER_SORT);
    printf("%d) print students\n", ORDER_PRINT_STUDENTS);
    printf("%d) cancel\n", ORDER_CANCEL);
}

Student *handle_delete_student(Student *head) {
    printf("please enter student email : ");
    char email[MAX_STUDENT_EMAIL_LENGTH];
    fgets(email, MAX_STUDENT_EMAIL_LENGTH, stdin);
    sanitize_input_string(email);

    if (strcmp(email, head->email) == 0) {
        return delete_from_beginning(head);
    }

    if (strcmp(email, last_student(head)->email) == 0) {
        delete_from_end(head);
        return head;
    }

    delete_from_middle(head, email);
    return head;
}

void delete_from_middle(Student *head, char *email) {
    Student *delete_target = find_student(head, email);
    Student *before = find_before_node(delete_target, head);
    before->next = delete_target->next;
    delete_target->next = NULL;
    free(delete_target);
}

void delete_from_end(Student *head) {
    Student *delete_target = last_student(head);
    Student *before = find_before_node(delete_target, head);
    before->next = NULL;
    free(delete_target);
}

Student *delete_from_beginning(Student *head) {
    Student *delete_target = head;
    Student *new_head = head->next;
    delete_target->next = NULL;
    free(delete_target);
    return new_head;
}

Student *find_before_node(Student *node, Student *head) {
    Student *before_node = head;
    while (before_node->next != node) {
        before_node = before_node->next;
    }
    return before_node;
}

Student *last_student(Student *head) {
    Student *iteration_node = head;
    while (iteration_node && iteration_node->next) {
        iteration_node = iteration_node->next;
    }
    return iteration_node;
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