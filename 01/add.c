#include <stdio.h>

/*
int add;
printf("X = ");
scanf("%d", &add);
printf("Y = ");
scanf("%d", &add);
printf("X + Y = ", "%d", "+", "%d", "=", "%d+%d" );
*/

int main()
{
    int x;
    int y;

    printf("X = ");
    scanf("%d", &x);

    printf("Y = ");
    scanf("%d", &y);

    printf("X + Y = %d + %d =v%d\n", x, y, x+y );
    return 0;
}
