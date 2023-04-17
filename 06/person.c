#include <stdio.h>

struct person{
    char name[10];
    int age;
};

void show_person(const struct person* p){ //構造体へのポインタ
    printf("%s, (%d)\n", p->name, p->age); //構造体のメンバには変数名.メンバ名でアクセス出来る
}

int main(){
    struct person enryo = { //stuct person型の変数enryoを宣
        .name = "Enryo", .age = 24, //メンバ変数、nameを"Enryo"、ageを24で初期化
    };
    show_person(&enryo);
    return 0;
}