#include <stdio.h>
#include <string.h>

int main()
{
    int a[5] = {12, 34, 56, 78, 90};
    int b[5] = {12, 34, 56, 78, 90};

    if (memcmp(a, b, sizeof(a)) == 0){
        printf("a and b are the same\n");
    }
    else{
        printf("a and b are NOT the same\n");
    }
    return 0;
}
