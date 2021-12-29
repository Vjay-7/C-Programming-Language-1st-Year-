#include<stdio.h>

/* This program is tasked to convert an input temperature in Fahrenheit to
its equivalent temperature in Celsius and output the Celsius*/

int main()
{ double fahr, cel;  // variables declaration; fahr- fahrenheit and cel- celcius
    printf("Enter the value of Fahrenheit ---> ");
    scanf("%lf", &fahr);
    cel= 5.0/9.0*(fahr-32);  // the fraction form of 5/9 must be a real number not an integer because it will result to zero
    printf ("The equivalent value in Celsius is %.2lf", cel);
    return 0;
}
