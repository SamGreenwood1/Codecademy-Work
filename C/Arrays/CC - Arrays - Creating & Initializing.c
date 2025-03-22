#include<stdio.h>

int main() {
  
  // Checkpoint 1 code goes here.
double q[5];
  // Checkpoint 2 code goes here.
  // dataType name[] = {firstValue, secondValue, thirdValue, …};

  double q[] = {1.0, 2.0, 3.0, 4.0, 5.0};

  for(int i = 0; i < 5; i++) {
    printf("%f\n", q[i]);
  }

}