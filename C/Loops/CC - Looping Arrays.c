#include<stdio.h>

int main() {
  int i = 0;  // Initialize i to 0
  int arr[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 20, 22, 26, 28, 29};
  int arr2[100];
    
  // Code for Checkpoint 1 goes here
  while(i <= 19) {  // Array indices are 0-19 (20 elements)
      printf("%d\n", arr[i]);
      i++;
  }

  i = 0;  // Reset i for the next loop

  for (int x = 0; x < 3; x++) {
    arr2[x] = 4 + x;
    printf("%d\n", arr2[x]);
  }

  return 0;
}