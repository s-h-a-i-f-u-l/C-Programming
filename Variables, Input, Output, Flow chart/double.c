#include <stdio.h>

int main()
{

    double b;

    // format specifiers of double
    printf("The format specifiers of character is : ( %%lf )");
    
    //direct double input
    b = 3.141592653589793;
    printf("The double value is = %lf \n",b);
    
    //using scanf
    printf("Enter a double value = ");
    scanf("%lf",&b);
    printf("The double value is = %lf \n",b);

    //size of double value
    int x= sizeof(double);
    //can use sizeof(b) above as well
    printf("The size of double is = %d \n",x);

    return 0;
    // return 0 indicates that the program ended successfully
}