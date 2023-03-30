#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t* p = (uint8_t*)main;
    for (int i = 0; i < 10; i++){
        printf(" %02x", p[i]);
    }
    printf("\n");
    return 0;
}