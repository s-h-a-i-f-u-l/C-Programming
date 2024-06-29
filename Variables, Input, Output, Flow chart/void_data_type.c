//In C, the void type is unique because it represents the absence of value. Here are the primary ways void is used in C:

#include <stdio.h>

void printMessage() {
    printf("Hello, World!\n");
}

int main() {
    printMessage();
    
    int a = 10;
    double b = 20.5;
    void *ptr;

    // Pointing to an integer
    ptr = &a;
    printf("Value of a = %d\n", *(int *)ptr);

    // Pointing to a double
    ptr = &b;
    printf("Value of b = %.1f\n", *(double *)ptr);

    return 0;
    
}
