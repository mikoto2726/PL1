#include <stdio.h>

void fraction_to_str(const char *s, int *np, int *dp){
    sscanf(s, "%d/%d", np, dp);
}

int main(){
    int an, ad, bn, bd;
    fraction_to_str("2/3", &an, &ad);
    fraction_to_str("33/100", &bn, &bd);

    printf("%d/%d, %d/%d\n", an, ad, bn, bd);
    return 0;
}