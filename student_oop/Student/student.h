#ifndef STUDENT_OOP_STUDENT_H
#define STUDENT_OOP_STUDENT_H

#define ORDER_ADD 1
#define ORDER_DELETE 2
#define ORDER_SORT 3
#define ORDER_PRINT_STUDENTS 4
#define ORDER_CANCEL 5

#define MAX_STUDENT_NAME_LENGTH 100
#define MAX_STUDENT_EMAIL_LENGTH 150
#define MAX_STUDENT_PASSWORD_LENGTH 100

typedef struct student Student;

struct student {
    int id;
    char name[MAX_STUDENT_NAME_LENGTH];
    char email[MAX_STUDENT_EMAIL_LENGTH];
    char password[MAX_STUDENT_PASSWORD_LENGTH];
    struct student *next;
};

Student *handle_add_student(Student *head);

Student *find_tale(Student *head);

Student *find_student(Student *head, char *email);

void sanitize_input_string(char *name);

int get_user_order();

bool is_valid_order(int order);

void show_menu();

Student *handle_delete_student(Student *head);

Student *find_before_node(Student *node, Student *head);

void handle_print_students(Student *head);

#endif //STUDENT_OOP_STUDENT_H
