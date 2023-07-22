#include <stdio.h>

int streq(s, t){
    
}

int main()
{
    printf("result1: %s\n", streq("iniad", "iniAD") ? "True": "False");
    printf("result2: %s\n", streq("INIAD", "INIADINI") ? "True": "False");
    printf("result3: %s\n", streq("iNiAd", "InIaD") ? "True": "False");
    return 0;
}