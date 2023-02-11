#include <stdio.h>
#include <unistd.h>

/*
int main()
{
    int time;
    printf("seconds = ");
    scanf("%d", &time);
    printf("%d");
    sleep(1);
    print("%d", time - 1)
}
*/

int main()
{
    int t; 
    
    printf("seconds = ");
    scanf("%d", &t);

    while (t > 0) {
        printf("%d\n", t);
        sleep(1);
        t -= 1;
    }
    
    printf("finished\n");
    return 0;
}