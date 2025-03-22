#include <stdio.h>

int main() {
    double arr[] = {1.0, 8, 2.27, 16.2, 2, 3.14, 12.6, 1.62, 6.54, 9, 11};
    
    // Calculate array length
    int total_size = sizeof(arr);
    int double_size = sizeof(double);
    int len = total_size / double_size;
    
    // Print sizes
    printf("Total size of array: %d bytes\n", total_size);
    printf("Size of double: %d bytes\n", double_size);
    printf("Number of elements: %d\n", len);
    
    // Print array contents
    printf("\nArray contents:\n");
    for (int i = 0; i < len; i++) {
        printf("%.2f\n", arr[i]);
    }
    
    return 0;
}