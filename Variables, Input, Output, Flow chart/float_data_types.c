//float means fraction value.
#include <stdio.h>

int main()
{
    float a = 1.334;
    
    //printing the variables defined above along with their sizes
    printf("Hello! I am a float. My value is %f and "
           "my size is %d byte.\n", a,sizeof(char));

    //printing two digit after point
    printf("The two digit after point %0.2f \n",a);


    //printing using %lu format specifier
    printf("The two digit after point %lu",a);

    return 0;
    // return 0 indicates that the program ended successfully
}