#include <stdio.h>

int main() {
  int i = 99;

  // Write your loop here
  for (i = 99; i >= 1; i--) {
    printf("%d bottles of pop on the wall.\t", i);
    printf("Take one down and pass it around.\n");
    if (i - 1 == 0) {
        printf("No more bottles of pop on the wall.\n");
    } else {
        printf("%d bottles of pop on the wall.\n", i - 1);
    }
  }
  return 0;
}