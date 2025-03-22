#include <stdio.h>



int main() {
    int i = 1;

    switch (i) {
    case i%3==0:    
        printf("Fizz\n");
        break;
    case i%5==0:
        printf("Buzz\n");
        break;
    default:
        printf("%d\n", i);
    }

    return 0;
}
