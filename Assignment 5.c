#include <stdio.h>

//this code is programmed to determine the smallest number that you inputed
main()
{  
	int n,i=1,x,smallest;
	printf("Please enter how many integers you want to input --> ");
	scanf("%d", &n);
	
		do	
	{ 	if (i==1) printf("\nYour %dst value is  ", i);     //this statement is just to organized the sequence of the inputed value, 1st
	    else if (i==2) printf("Your %dnd value is  ", i);  //this statement is just to organized the sequence of the inputed value, 2nd
	    else if (i==3) printf("Your %drd value is  ", i);  //this statement is just to organized the sequence of the inputed value, 3rd
		else printf("Your %dth value is  ", i);			   //this statement is just to organized the sequence of the inputed value, 4-nth
		scanf("%d",&x);
			if (i==1)
				smallest=x;
			else
			{
				if (x < smallest)
				smallest=x;
			}
	     i++;
	 }

	    while (i<=n);
	    printf("\n The smallest number that you input is %d", smallest);
}
