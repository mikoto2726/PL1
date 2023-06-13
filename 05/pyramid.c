#include <stdio.h>

void pyramid(int size) {
  int i, j, k;
  for (i = 1; i <= size; i++) {
    for (j = i; j < size; j++) {
      printf(" ");
    }
    for (k = 1; k <= (2 * i); k++) {
      printf("#");
    }
    printf("\n");
  }
}

int main() {
  pyramid(5);
  return 0;
}
