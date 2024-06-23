#include <stdio.h>

int main()
{
    int a = 1;

    printf("Hello! I am an integer Data.\nMy value is %d and "
           "my size is  %lu  bytes.\n", a,sizeof(int));

    //can use sizeof(a) above as well

    return 0;
    // return 0 indicates that the program ended successfully
}