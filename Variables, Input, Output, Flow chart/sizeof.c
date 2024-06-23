//sizeof function is use for finding out the size of data.
#include <stdio.h>

int main()
{
    int a = 1;

    int b = sizeof(a);

    int x = sizeof(int);

    printf("%d\n",b);

    printf("%d\n",x);

    printf("I am Integer data & my size is %lu bytes\n", sizeof(int));

    printf("I am Unsigned Integer data & my size is %lu bytes\n", sizeof(unsigned int));

    printf("I am Short Integer data & my size is %lu bytes\n", sizeof(short));

    printf("I am Unsigned Short Integer data & my size is %lu bytes\n", sizeof(unsigned short));

    printf("I am Long Integer data & my size is %lu bytes\n", sizeof(long));

    printf("I am Unsigned Long Integer data & my size is %lu bytes\n", sizeof(unsigned long));

    printf("I am Long Long Integer data & my size is %lu bytes\n", sizeof(long long));

    printf("I am Unsigned Long Long Integer data & my size is %lu bytes\n", sizeof(unsigned long long));

    printf("I am Character data & my size is %lu bytes\n", sizeof(char));

    printf("I am Unsigned Character data & my size is %lu bytes\n", sizeof(unsigned char));

    printf("I am Floating Point data & my size is %lu bytes\n", sizeof(float));

    printf("I am Double Floating Point data & my size is %lu bytes\n", sizeof(double));

    printf("I am Long Double Floating Point data & my size is %lu bytes\n", sizeof(long double));
    
    printf("I am Void Pointer data & my size is %lu bytes\n", sizeof(void *));

    printf("Hello! I am a & i am an integer Data.\nMy value is %lu and "
           "my size is  %lu  bytes.\n", a,sizeof(int));
    //can use sizeof(a) above as well
    return 0;
}