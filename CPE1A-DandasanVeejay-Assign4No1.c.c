#include <stdio.h>
#include <math.h>      // I included math.h header declaration for a certain function

/* This program is tasked for computation for the perimeter of a right triangle, given the 2 smaller
sides, base and height */

void main ()

{ double area, perimeter, hypotenuse, height, base;  // these are the variable declaration

   printf("Enter the height of triangle -->  ");
   scanf("%lf", &height );
   printf("Enter the base of triangle -->  ");
   scanf("%lf", &base);
   hypotenuse= sqrt(base*base+height*height);
   area= 1.0/2.0 *(base*height);                 // the 1/2 must be a real number, not an integer because it will result to zero
   perimeter= base+height+hypotenuse;           //calculation of variablesSS    
   printf("The perimeter of the triangle is %.2lf and the area is %.2lf", perimeter, area);
}
