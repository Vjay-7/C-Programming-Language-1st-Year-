#include <stdio.h>

int squaredNum;

    int Squared( int num )
{

    squaredNum= num*(num);
     return squaredNum;
}
    PrintValue()
{
    printf("\n\n\t\t The Squared Value of %d \n\n\n", squaredNum);
}

int main()
{
    int num;
    printf("\n\n\t\tHello There, this is a program that will square any number you input!");
    printf("\n\n\t\tPlease input a number you want to square: ");
    scanf("&d", &num);
    squaredNum = Squared(num);
    PrintValue();
}
