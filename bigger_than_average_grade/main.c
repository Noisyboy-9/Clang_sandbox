#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct
{
    int id;
    int grade;
} Student;

void get_student_data(Student *students, int index);
void print_bigger_than_average_students(Student *students, int count);
double average(Student *students, int count);
bool has_grade_bigger_than_average(Student student, double average);
int main()
{
    int students_count;
    printf("please enter students count: ");
    scanf("%d", &students_count);

    Student *students = (Student *)calloc(students_count, sizeof(Student));

    for (int i = 1; i <= students_count; i++)
    {
        get_student_data(students, i);
    }

    print_bigger_than_average_students(students, students_count);
    free(students);
    return 0;
}

void get_student_data(Student *students, int index)
{
    int id, grade;
    printf("please input student id: ");
    scanf("%d", &id);

    printf("plase input student grade: ");
    scanf("%d", &grade);

    students[index].id = id;
    students[index].grade = grade;
}

void print_bigger_than_average_students(Student *students, int count)
{
    double grade_average = average(students, count);

    for (int i = 1; i <= count; i++)
    {
        if (has_grade_bigger_than_average(students[i], grade_average))
        {
            printf("student with id of |%d| has grade |%d|, which is bigger than or equal to average\n", students[i].id, students[i].grade);
        }
    }
}

double average(Student *students, int count)
{
    int sum = 0;
    for (int i = 1; i <= count; i++)
    {
        sum += students[i].grade;
    }

    return sum / count;
}

bool has_grade_bigger_than_average(Student student, double average)
{
    return student.grade >= average;
}