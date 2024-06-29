#include <stdio.h>

int main() {
    int a = 12;
    unsigned int b = 255;
    float c = 3.14;
    double d = 3.141592653589793;
    char e = 'A';
    char str[] = "Hello, World!";
    void *ptr = &a;

    printf("Signed integer (%%d): %d\n", a);
    printf("Unsigned integer (%%u): %u\n", b);
    printf("Octal (%%o): %o\n", b);
    printf("Hexadecimal (%%x): %x\n", b);
    printf("Hexadecimal (%%X): %X\n", b);
    printf("Float (%%f): %f\n", c);
    printf("Double (%%lf): %lf\n", d);
    printf("Scientific notation (%%e): %e\n", d);
    printf("Scientific notation (%%E): %E\n", d);
    printf("Character (%%c): %c\n", e);
    printf("String (%%s): %s\n", str);
    printf("Pointer (%%p): %p\n", ptr);
    printf("Percent sign (%%%%): %%\n");

    return 0;
}
