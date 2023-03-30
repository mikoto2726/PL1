#include <stdio.h>

static void morning(){printf("Good morning!\n");}
static void hello(){printf("Hello!\n");}
static void night(){printf("Good night!\n");}

static void (*menu_callbacks[])() = {
    morning, hello, night
};

int main(){
    int menu;
    printf("Menu (1-3)?");
    scanf("%d", &menu);

    if (menu < 1 || menu > 3){
        printf("ERROR: wrong menu number\n");
        return 1;
    }
    menu_callbacks[menu-1]();
    return 0;
}