#include <stdio.h>

int main() {
    int a;
    char p;
    float z;
    double g;
    char str[100];
    void *ptr = &a;

    // Using scanf to take input for multiple data types together
    printf("Enter an integer, a character, a float, a double, and a string separated by spaces:\n");
    scanf("%d %c %f %lf %s", &a, &p, &z, &g, str);

    // Printing many data types together
    printf("%d %c %.2f %.6lf %s %p\n", a, p, z, g, str, ptr);

    return 0;
}
