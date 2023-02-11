#include <stdio.h>

int main(){
    int x, y;

    printf("X= ");
    scanf("%d", &x);

    printf("Y= ");
    scanf("%d", &y);

    if (x == y) printf("X and Y is the same\n");
    else printf("X and Y is not the same\n");

    return 0;
}