#include<stdio.h>

/*m this program is to compute and display the area and perimeter
of a rectangle, given as inputs its length and width*/

int main()
{
   double length, width, perimeter, area;
    printf("This program is for calculating the area and perimeter of a rectangle.\n");
    printf("Enter value length --> ");
    scanf("%lf", &length );
    printf("Enter value width --> ");
    scanf("%lf", &width);
    perimeter= 2*(length+width); // variable computation for perimeter
    area= width*length;             // variable computation for area
    printf("The area is %.2lf and the perimeter is %.2lf", area, perimeter);
    return 0;
}
