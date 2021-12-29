#include <stdio.h>

void main()
{
	int numbers[10];  	//declaring 1D array, its name and its 10 size 
	int sum, x,y;
	printf("\n\n  Please input 10 integers: \n\n");
	
	for ( x=0;x<10;x++) 			// iteration for 10 array elements for the input value
	{		
			if (x==0)				// this condition only display if x=0 indication the beginning of the input value by user
			{ printf("   1st integer--> ");
				scanf("%d", &numbers[x]);
			}
			else if (x==1)					// this condition only display if the x=9 indication the last number that will input by user
			{printf("   2nd integer--> ");
			 scanf("%d", &numbers[x]);}
			 else if (x==2)					// this condition only display if the x=9 indication the last number that will input by user
			{printf("   3rd integer--> ");
			 scanf("%d", &numbers[x]);}
			else
			{
				y=x+1;
				printf("   %dth Integer --> ", y);	
				scanf("%d", &numbers[x]);}		// taking the input value from the user
	}
	printf("\n\n");
	printf("   The input odd integers ==> "); 
	for (x=0;x<10;x++) 
	{
	
		if (numbers[x]%2!=0)	// this statement condition only accept if the value of an array element is odd number		
		
		{	printf("%d ",numbers[x]);	// execute this statement when the if condition is true	
			sum= sum+numbers[x];		// it calculate the total sum of the odd integers
	    }		
	}
	
	printf("\n\n   The total sum is of the odd integers is %d \n\n\n\n",sum);  // if the for loop terminates display the total sum of odd integers
}



