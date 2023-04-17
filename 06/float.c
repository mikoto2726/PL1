#include <stdio.h>
#include <stdint.h>

int main(){
    union floatval{
        float f;
        uint32_t u;
    } v;
    v.f = 0.15625;
    printf("v.u = %u\n", v.u);
    return 0;
}