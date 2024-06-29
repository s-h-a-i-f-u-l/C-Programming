#include <stdio.h>
int main()
{
    char b;

    // format specifiers of character
    printf("The format specifiers of character is : ( %%c )");
    
    //direct char input
    b='a';
    printf("\n The character is = %c \n",b);
    
    //using scanf
    printf("Enter a character = ");
    scanf("%c",&b);

    printf("The character is = %c \n",b);

    //size of character
    int x= sizeof(char);
    printf("The size of character is = %d \n",x);

    //Integer value of a character
    printf("The integer value of character is = %d \n",b);

}