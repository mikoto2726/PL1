#include <stdio.h>
#include <string.h>

/*
void interleave(char* d, const char *a, const char *b){
    int i, j = 0;
    for (i=0; a[i] != '\0' || b[i] != '\0'; i++){
        d[j++] = a[i];
        d[j++] = b[i];
    }
    if(a[i] == '\0'){
        strcpy(&d[j], &b[i]);
    }
    else if(b[i] == '\0'){
        strcpy(&d[j], &a[i]);
    }
    d[j] = '\0';
}
*/
/*
void interleave(char* d, const char *a, const char *b){
    int i, j = 0;
    for (i = 0; a[i] != '\0' || b[i] != '\0'; i++){
        if (a[i] != '\0'){
            d[j++] = a[i];
        }
        if (b[i] != '\0'){
            d[j++] = b[i];
        }
    }
    d[j] = '\0';
}
*/

 /*if (a[i] !='\0'){
        for (; a[i]!='\0'; i++){
            d[j++] = a[i];
        }
        d[j] = '\0';
    }
    else{
        strcpy(&d[j], &b[i]);
    }*/


void interleave(char* d, const char *a, const char *b){
    int i, j = 0;
    for (i = 0; a[i] != '\0' && b[i] != '\0'; i++){
        d[j++] = a[i];
        d[j++] = b[i];
    }
   
    if (a[i] == '\0') {
        while (b[i] != '\0'){
            d[j++] = b[i++];
        }
    }
    else if (b[i]=='\0'){
         while (a[i] != '\0') {
            d[j++] = a[i++];
        }
    }
   
    d[j] = '\0';
}

/*
void interleave(char* d, const char *a, const char *b){
    int i, j = 0;
    for (i=0; a[i] != '\0' || b[i] != '\0'; i++){
        d[j++]=a[i];
        d[j++]=b[i];
    }
}
*/

int main(){
    char result[100];
    interleave(result, "INIAD", "Toyo");
    printf("%s\n", result);
    interleave(result, "Toyo", "University");
    printf("%s\n", result);
    return 0;
}