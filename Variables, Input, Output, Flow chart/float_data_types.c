#include <stdio.h>

int main() {
    float b;
    
    // Format specifiers of float
    printf("The format specifiers of float is : ( %%f )\n");

    // Direct float input
    b = 3.1416;
    printf("\nThe float value is = %f \n", b);
    
    // Using scanf
    printf("Enter a float value = ");
    scanf("%f", &b);

    printf("The float value is = %f \n", b);

    // Size of float
    int x = sizeof(float);
    printf("The size of float is = %d \n", x);

    // Integer value of a float
    printf("The integer value of a float is = %d \n", (int)b);

    // Printing two digits after the point
    printf("The two digits after the point are: %.2f \n", b);

    return 0;
    // return 0 indicates that the program ended successfully
}
