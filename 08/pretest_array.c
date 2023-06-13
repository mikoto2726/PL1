typedef struct person {
    int age;
    char name[80];
    struct Person* prev;
    struct Person* next;
} Person;




typedef struct {
    Person* first;
    Person* last;
} PersonList;