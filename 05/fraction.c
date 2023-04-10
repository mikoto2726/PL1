#include <stdio.h>
void fraction_to_str(char *s, int n, int d){
    sprintf(s, "%d/%d", n, d);
}

int main(){
    char s[10], t[10];
    fraction_to_str(s, 2, 3);
    fraction_to_str(t, 33, 100);
    printf("%s, %s\n", s, t);
    return 0;
}