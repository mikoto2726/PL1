typedef struct person {
    int age;
    char name[80];
    struct Person* prev;
    struct Person* next;
} Person;


typedef struct personList {
    int n;
    Person persons[100];
} PersonList;


