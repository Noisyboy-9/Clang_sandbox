#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INPUT_FILE_PATH_LENGTH 500

#define ID_MAX_LENGTH 10
#define NAME_LENGTH 30
typedef enum {
    READ_DATA = 1,
    SHOW_DATA = 2,
    EXIT = 3
} MenuOrder;

typedef struct studentTag {
    char id[ID_MAX_LENGTH];
    char firstName[NAME_LENGTH];
    char lastName[NAME_LENGTH];

    struct studentTag *next;
} Student;

void showMenu();

MenuOrder getUserMenuOrder();

Student *readDataHandler(FILE *fileHandler, Student *head);


void skipLine(FILE *fileHandler);

Student *pushToList(Student *head, char id[ID_MAX_LENGTH], char firstName[NAME_LENGTH], char lastName[NAME_LENGTH]);

Student *findTale(Student *head);

void sanitizeString(char *string);

void showDataHandler(Student *head);

int main() {
    FILE *fileHandler = fopen("SuperClass.csv", "rb");

    if (!fileHandler) {
        perror("file open failed");
        return -1;
    }


    showMenu();
    MenuOrder order = getUserMenuOrder();


    Student *head = NULL;

    while (order != EXIT) {
        switch (order) {
            case READ_DATA:
                head = readDataHandler(fileHandler, head);
                break;
            case SHOW_DATA:
                showDataHandler(head);
                break;
            default:
                order = EXIT;
        }
        if (order != EXIT) {
            showMenu();
            order = getUserMenuOrder();
        } else {
            break;
        }
    }

    return 0;
}

void showDataHandler(Student *head) {
    Student *iterationNode = head;
    while (iterationNode) {
        printf("----------------------------\n");
        printf("student id : %s\n", iterationNode->id);
        printf("student firstName: %s\n", iterationNode->firstName);
        printf("student lastName : %s\n", iterationNode->lastName);

        iterationNode = iterationNode->next;
    }
    printf("----------------------------\n");
}

Student *readDataHandler(FILE *fileHandler, Student *head) {
    skipLine(fileHandler);//    skipping first line containing table column names
    char line[NAME_LENGTH];
    fgets(line, NAME_LENGTH, fileHandler);

    do {
        char id[ID_MAX_LENGTH];
        char firstName[NAME_LENGTH];
        char lastName[NAME_LENGTH];

//        extracting needed data
        strcpy(id, strtok(line, ","));
        strcpy(firstName, strtok(NULL, ","));
        strcpy(lastName, strtok(NULL, ","));
        sanitizeString(lastName);

        head = pushToList(head, id, firstName, lastName);
        fgets(line, NAME_LENGTH, fileHandler);
    } while (!feof(fileHandler));

    return head;
}

void sanitizeString(char *string) {
    string[strlen(string) - 2] = '\0';
}

Student *pushToList(Student *head, char id[ID_MAX_LENGTH], char firstName[NAME_LENGTH], char lastName[NAME_LENGTH]) {
    if (!head) {
        head = (Student *) calloc(1, sizeof(Student));
        strcpy(head->id, id);
        strcpy(head->firstName, firstName);
        strcpy(head->lastName, lastName);
        head->next = NULL;
        return head;
    }

    Student *newStudent = (Student *) calloc(1, sizeof(Student));
    Student *tale = findTale(head);

    strcpy(newStudent->id, id);
    strcpy(newStudent->firstName, firstName);
    strcpy(newStudent->lastName, lastName);
    newStudent->next = NULL;

    tale->next = newStudent;
    return head;
}

Student *findTale(Student *head) {
    if (!head) {
        return NULL;
    }

    Student *iterationNode = head;

    while (iterationNode->next) {
        iterationNode = iterationNode->next;
    }

    return iterationNode;
}

void skipLine(FILE *fileHandler) {
    char endOfLineChecker;
    do {
        endOfLineChecker = getc(fileHandler);
    } while (endOfLineChecker != '\n');
}

MenuOrder getUserMenuOrder() {
    int inputOrder;
    printf("please input your order:\t");
    scanf("%d", &inputOrder);

//    validating input order
    while (inputOrder > 3) {
        printf("invalid input, please input your order again:\t");
        scanf("%d", &inputOrder);
    }

    MenuOrder order;
    switch (inputOrder) {
        case 1:
            order = READ_DATA;
            break;
        case 2:
            order = SHOW_DATA;
            break;
        default:
            order = EXIT;
    }

    return order;
}

void showMenu() {
    printf("1) Read data from file\n");
    printf("2) Print data to console\n");
}
