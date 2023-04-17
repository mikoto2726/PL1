#include <stdio.h>
 
 enum Hand {ROCK, SCISSORS, PAPER, N_HAND};

 const char result_table[N_HAND][N_HAND] = {
    {0, +1, -1}, 
    {-1, 0, +1},
    {+1, -1, 0},
 };

 int janken(enum Hand me, enum Hand opponent)
 {
    return result_table[me][opponent];
 }

 int main(){
    printf("Rock vs Siccors: %d\n", janken(ROCK, SCISSORS));
    printf("ScIssors vs Scissors: %d\n", janken(SCISSORS, SCISSORS));
    printf("Paper vs Scissors: %d\n", janken(PAPER, SCISSORS));
    return 0;
 }