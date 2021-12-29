# include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.1416

void main ()
{ char choice, pick;
  double area, perimeter, hypotenuse, height, base, length, width, radius, circumference;

do
{	
	system("cls");
    printf("\n\n\t\t\t    :::::::::::::::::::::: VjayEx Calculator ::::::::::::::::::::::\n");
	
	
	printf("\n\n     a. Compute the area and perimeter of a right triangle   b. Compute the area and perimeter of a rectangle\n");
	printf("     c. Compute the area and perimeter of a square \t     d. Compute the area and circumference of a circle");
	printf("\n\n [Press 'x' to exit]");
	printf("\n **Choose the letter for your mode calculation--> ");	
	choice= getchar();scanf("c");   
	
    if (choice=='x'||choice=='X')
	{
	    printf("\n\t\t\t\t\t   End of the Program\a");
	  
    }
	else if (choice=='a'||choice=='A')
	{
		do
		{
		 system("cls");
		 printf("\n\n\t\t\t----Calculating the area and perimeter of a right triangle----\n\n");
		 printf("  Enter the height of triangle -->  ");
   		 scanf("%lf", &height );
   		 printf("  Enter the base of triangle -->  ");
   		 scanf("%lf", &base);
  		 hypotenuse= sqrt(base*base+height*height);
  		 area= 1.0/2.0 *(base*height);                 // the 1/2 must be a real number, not an integer because it will result to zero
  		 perimeter= base+height+hypotenuse;           //calculation of variablesSS    
  		 printf("\n\t\t\t[The perimeter of the triangle is %.2lf and the area is %.2lf]\n\n", perimeter, area);
  		 printf("\n  press 'v' to calcualte again ");
  		 printf("\n  press 'y' for the other mode calculation  ");
  		 printf("\n  press 'x' to exit ");
    	 scanf("%c");scanf("%c",&pick);
    	}
    	while (pick=='v'||pick=='V');	
	}
	else if (choice=='b'|| choice=='B')
	{
		do
		{
	 	 system("cls");
	  	 printf("\n\n\t\t\t----Calculating the area and perimeter of a rectangle----\n\n\a");
         printf("  Enter value length --> ");
         scanf("%lf", &length );
         printf("  Enter value width --> ");
         scanf("%lf", &width);
         perimeter= 2*(length+width); // variable computation for perimeter
         area= width*length;             // variable computation for area
         printf("\n\t\t\t[The area is %.2lf and the perimeter is %.2lf]\n\n", area, perimeter);
         printf("\n  press 'v' to calcualte again ");
  		 printf("\n  press 'y' for the other mode calculation  ");
  		 printf("\n  press 'x' to exit ");
    	 scanf("%c");scanf("%c",&pick);
    	}
    	while (pick=='v'||pick=='V');
	}
	else if (choice=='c'|| choice=='C')
	{
		do
		{
		 system("cls");
		 printf("\n\n\t\t\t----Calculating the area and perimeter of a square----\n\n\a");
		 printf("  Enter the length of the sides of a square -->  ");
    	 scanf("%lf",&length);
    	 area= length*length;    // variable calculation for area   
    	 perimeter= 4*length;   // variable calculation for perimter 
    	 printf("\n\t\t\t[The area of sqauare is %.2lf and the perimeter is %.2lf]\n\n", area, perimeter);	
     	 printf("\n  press 'v' to calcualte again ");
  		 printf("\n  press 'y' for the other mode calculation  ");
  		 printf("\n  press 'x' to exit ");
    	 scanf("%c");scanf("%c",&pick);
    	}
    	while (pick=='v'||pick=='V');
	}
	else if (choice=='d'||choice=='D')
	{
		do
		{
		 system("cls");
		 printf("\n\n\t\t\t----Calculating the area and circumfere of a circle----\n\n\a");
		 printf("  Enter the radius of circle -->   ");
    	 scanf("%lf", &radius);
    	 circumference= pi*2*radius;  // variable computation for perimeter
    	 area= pi*radius*radius;  // variable computation for area
         printf("\n\t\t\t[The area is %.2lf and the circumference is %.2lf]\n\n", area, circumference);
         printf("\n  press 'v' to calcualte again ");
  		 printf("\n  press 'y' for the other mode calculation  ");
  		 printf("\n  press 'x' to exit ");
    	 scanf("%c");scanf("%c",&pick);
    	}
    	while (pick=='v'||pick=='V');
    }
	else
	{
		printf("\n\n\t\t\t\t\t            Invalid choice\n");
    	printf("\t\t\t\t\t   ...Please re-run the program...\n\n");
    }
}
 while (pick=='y'||pick=='Y');
 {
 	printf("\n\n\t\t\t\t\t       Thank you for using :>>\n\n\n\n\n\n\a");
 }
}
