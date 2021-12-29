#include<stdio.h>

/*m this program is to compute and display the area and perimeter
of a square, given as input the length of its side*/

int main()
{ double area, perimeter, length;  // variables declaration
    printf("Enter the length of the sides of a square -->  ");
    scanf("%lf",&length);
    area= length*length;    // variable calculation for area   
    perimeter= 4*length;   // variable calculation for perimter 
    printf("The area of sqauare is %.2lf and the perimeter is %.2lf", area, perimeter);
    
    return 0;
}
