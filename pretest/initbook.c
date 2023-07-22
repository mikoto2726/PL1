#include <stdio.h>

typedef struct {
    char title[40];
    int  price;
} Book;

int init_book(p, title, price){
    
}


int main()
{
    Book book;
    init_book(&book, "Dragon Ball", 400);
    printf("%s (%d)\n", book.title, book.price);
    return 0;
}