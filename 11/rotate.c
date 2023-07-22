#include <stdio.h>
#include <stdint.h>

uint32_t rotate_left(uint32_t x, int n)
{
    if(n <= 0 || n >= 32) return x; // If n is not in valid range (1-31), return original value
    return (x << n) | (x >> (32 - n));
}

int main()
{
    uint32_t x = 0x12345678;
    int n = 4;
    
    printf("Before rotation x = %x\n", x);
    uint32_t y = rotate_left(x, n);
    printf("After rotation, y = %x\n", y);
    return 0;
}