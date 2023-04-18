#include <stdio.h>
#include <string.h>

typedef struct {
    enum {STUDENT, TEACHER} type;
    char name[10];
    union{
        struct{
            int grade;
            double gpa;
        } student;
        struct{
            int salary;
        } teacher;
    };
} Person;

void print_person(const Person* p){
    switch (p->type){
        case STUDENT:
            printf("%s is a %d grade student\n", p->name, p->student.grade);
            break;
        case TEACHER:
            printf("%s ears %d yen wvery day\n", p->name, p->teacher.salary);
            break;
    }
}

int main(){
    Person taro = {
        .type = STUDENT,
        .name = "Taro",
        .student = {.grade = 2, .gpa = 4.3},
    };
    Person hanako = {
        .type = TEACHER,
        .name = "Hanako",
        .teacher = {.salary = 1000},
    };

    print_person(&taro);
    print_person(&hanako);
    return 0;
}