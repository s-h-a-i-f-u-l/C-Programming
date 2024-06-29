#include <stdio.h>
int main()
{
    int b;
    
    // format specifiers of character
    printf("The format specifiers of Integer is : ( %%d )");

    //direct integer input
    b=99;
    printf("\n The character is = %d \n",b);

    //printing using %lu format specifier
    printf("printing using %%lu format specifier : %lu \n",b);
    
    //using scanf
    printf("\n Enter a integer = ");
    scanf("%d",&b);

    printf("The character is = %d \n",b);

    //size of Integer
    int x= sizeof(int);
    printf("The size of Integer is = %d \n",x);

    //character value of a integer
    printf("The character value of integer is = %c \n",b);

}