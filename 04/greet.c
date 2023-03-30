#include <stdio.h>

static void morning(){printf("Good morning!\n");}
static void hello(){printf("Hello!\n");}
static void night(){printf("Good night!\n");}

int main(){
    int menu;
    printf("Menu (1-3)?");
    scanf("%d", &menu);

    switch(menu){
    case 1:
        morning(); return 0;
    case 2:
        hello(); return 0;
    case 3:
        night(); return 0;
    default:
        printf("ERROR: wrong menu number\n"); return 1;
    }
}