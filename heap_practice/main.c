#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void show_menu();
int get_choice();
void show_array();
void get_array();

int *array = NULL;
int size = 0;
int main()
{
    while (true)
    {
        show_menu();
        int choice = get_choice();
        switch (choice)
        {
        case 1:
            get_array();
            break;

        case 2:
            show_array();
            break;
        case 3:
            exit(0);
        default:
            printf("Invalid choice");
            exit(1);
            break;
        }
    }
}
void show_menu()
{
    printf("1) New Data\n");
    printf("2) Show Data\n");
    printf("3) exit\n");
}

int get_choice()
{
    int choice;
    printf("please input your choice: ");
    scanf("%d", &choice);
    return choice;
}
void get_array()
{
    size = 0;
    printf("please enter array size : ");
    scanf("%d", &size);

    if (array == NULL)
    {
        // array is being initialized for the first time
        array = malloc(size * sizeof(int));
    }
    else
    {
        // array has been initialized before
        free(array);
        array = malloc(size * sizeof(int));
    }

    for (int i = 0; i < size; i++)
    {
        int input = 0;
        printf("enter number : ");
        scanf("%d", &input);
        array[i] = input;
    }
}

void show_array()
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
