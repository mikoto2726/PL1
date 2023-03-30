#include <stdio.h>

void enumerate(int* arr, int n, void(*func)(int))
{
    for (int i = 0; i < n; i++){
        func(arr[i]);
    }
}
static int sum = 0;
void add_int(int v){sum += v;}
void print_int(int v){printf("%d\n", v);}

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    enumerate(array, 5, print_int);
    enumerate(array, 5, add_int);
    printf("sum = %d\n", sum);
    return 0;
}