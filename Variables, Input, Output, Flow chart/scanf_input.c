#include <stdio.h>

int main()
{
    int a;
    char b;
    float c;
    double x;

    printf("Give the Integer input = ");
    scanf("%d", &a); // & indicates the location where the value needs to be put.
    printf("The Integer value is = %d \n", a);

    // Consuming the leftover newline character from the input buffer
    getchar(); 

//Consuming the leftover newline character:

//After reading the integer with scanf("%d", &a);, the newline character ('\n') from the Enter key remains in the input buffer. If this is not consumed, the subsequent scanf("%c", &b); will read this newline character instead of the intended character input.
//getchar() is used to consume this leftover newline character before reading the character input.

    printf("Give the character input = ");
    scanf("%c", &b); // & indicates the location where the value needs to be put.
    printf("The character is = %c \n", b);

    printf("Give the float input = ");
    scanf("%f", &c); // & indicates the location where the value needs to be put.
    printf("The float value is = %f \n", c);

    printf("Give the double input = ");
    scanf("%lf", &x); // & indicates the location where the value needs to be put.
    printf("The double value is = %lf \n", x);

    return 0;
}
