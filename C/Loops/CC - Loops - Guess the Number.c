#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

  int guess;
  int tries = 0;  // Start with 1 try

  printf("I'm thinking of a number in the range 1-10.\n");
  printf("Try to guess it: ");
  scanf("%d", &guess);

  while (guess != 8 && tries < 3) {
    printf("Wrong guess, try again: ");
    scanf("%d", &guess);
    tries++;
  }

  if (guess == 8) {
    printf("You got it!\n");
  } else {
    printf("You've tried 3 times. Game over!\n");
  }

  return 0;
}