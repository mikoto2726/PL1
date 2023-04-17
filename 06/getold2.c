#include <stdio.h>

typedef struct{
    char name[10];
    int age;
} person;

void getold(person* someone){
    someone->age++;
}

int main(){
    person enryo = { .name = "Enryo", .age = 24 };
    getold(&enryo);
    printf("I'm %d years old\n", enryo.age);
    return 0;
}