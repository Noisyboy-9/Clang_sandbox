#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define ORDER_ADD 1
#define ORDER_DELETE 2
#define ORDER_SORT 3
#define ORDER_PRINT_STUDENTS 4
#define ORDER_CANCEL 5

#define MAX_STUDENT_NAME_LENGTH 100
#define MAX_STUDENT_EMAIL_LENGTH 150
#define MAX_STUDENT_PASSWORD_LENGTH 100

struct student {
    int id;
    char name[MAX_STUDENT_NAME_LENGTH];
    char email[MAX_STUDENT_EMAIL_LENGTH];
    char password[MAX_STUDENT_PASSWORD_LENGTH];
    struct student *next;
};

typedef struct student Student;

void program_loop();

void show_menu();

int get_user_order();

bool is_valid_order(int order);

Student *handle_add_student(Student *head);

void sanitize_input_string(char *name);

bool student_exists(Student *head, char email[150]);

Student *find_tale(Student *head);

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

Student *handle_add_student(Student *head) {
    printf("please input student name: ");
    char name[MAX_STUDENT_NAME_LENGTH];
    fgets(name, MAX_STUDENT_NAME_LENGTH, stdin);
    sanitize_input_string(name);

    printf("please input student email address: ");
    char email[MAX_STUDENT_EMAIL_LENGTH];
    fgets(email, MAX_STUDENT_EMAIL_LENGTH, stdin);
    sanitize_input_string(email);
    if (student_exists(head, email)) {
        printf("student with specified email already exist!");
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

bool student_exists(Student *head, char email[150]) {
    if (!head) {
//        no student has been created to the point
        return false;
    }

    Student *current = head;
    while (current) {
        if (!strcmp(current->email, email)) {
            return true;
        }
        current = current->next;
    }

    return false;
    return 0;
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


