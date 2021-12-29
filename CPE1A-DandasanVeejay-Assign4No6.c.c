#include<stdio.h>

/* This program is tasked to convert an input temperature in Celsius to its
equivalent temperature in Fahrenheit and output the Fahrenheit*/

int main()
{ double cel, fahr;    // variable declaration; cel- Celcius and fahr- Fahrenheit
    printf("Enter value of Celsius ---> ");
    scanf("%lf",&cel);
    fahr= 9.0/5.0 *cel+32; // Varaibale computation. The fraction form of 9/5 must be a real number not an integer because it will result to zero
    printf("The equivalent value in Fahrenheit is %.2lf", fahr);
    return 0;
}
