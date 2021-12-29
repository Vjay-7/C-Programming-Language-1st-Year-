#include <stdio.h>
int x;											// variable x will be use throughout the program
void main()
{
	int num[5];									// array of the integer to be input
	printf("\n  Please enter 5 integer numbers \n");
	for(x=0; x<5; x++)
		{ 
			printf("  ");					
			scanf("%d", &num[x]);				// in only accept 5 inputs
		}		
	even (num);									// call function, execute function even
}


int even(int num[])								// functoin even where the formal parameter is the array num[]
{
	printf("\n     The even numbers that you input are ");
	for(x=0; x<5; x++)							// this loop individually checks the input numberes
	{
		if (num[x]%2==0)						// this condition only accept even numbers
		printf(" %d", num[x]);	
	}
}
