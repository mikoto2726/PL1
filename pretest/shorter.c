/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char shorter(char a, char b){
    char *s = a;
    char *t = b;

    if (strlen(s) < strlen(t)){
        printf("%s", &a);
    }
        
    
    if (strlen(s) > strlen(t)){
        printf("%s", &b);
    }
}

int main(){
    char a, b;
    printf(shorter(a, b));
    return 0;
}
*/
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    if(strlen(argv[1]) < strlen(argv[2])) {
        printf("%s\n", argv[1]);
    } else {
        printf("%s\n", argv[2]);
    }

    return 0;
}