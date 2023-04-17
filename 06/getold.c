#include <stdio.h>

struct person{
    char name[10];
    int age;
};

void getold(struct person* someone){
    someone -> age++;
}

int main(){
    struct person enryo = { .name = "Enryo", .age = 24};
    getold(&enryo); //1つ年を取る
    printf("I'm %d years old\n", enryo.age);
    return 0;
}