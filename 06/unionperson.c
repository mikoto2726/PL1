#include <stdio.h>
#include <string.h>

union person{
    char name[10];
    int age;
};

int main(){
    union person enryo;
    enryo.age = 24;
    strcpy(enryo.name, "Enryo");
    printf("%s (%d)\n", enryo.name, enryo.age);
    return 0;
}