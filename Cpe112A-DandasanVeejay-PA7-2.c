#include <stdio.h>

void main ()
{
	int matrix1[2][3], matrix2[2][3]; // declaring the 2D array matrix1 and matrix2 with 2 rows and 3 column
	int x, y, sum1,sum2, totalsum; 		// 'x' is the row index, 'y' is the column index and 'totalsum' is the value of the over all sum
	
	printf("\n     We have two matrices and each has 6 arrays allocated. Please input numbers\n\n");
	
	printf("     Matrix1\n");
	for (x=0; x<=1; x++)		// 2 iterations for 2 rows for matrix1
	{	// nested for loop
		for (y=0; y<=2; y++)	// 3 iteration for 3 columns for matrix1
			{	printf("  matrix1 [%d][%d] = ", x, y );
			scanf("%d", &matrix1[x][y]);  	//input the value of the specific array element for matrix1
			sum1= sum1 + matrix1[x][y];		// get the sum of each iteration
			}
	}	
	
	
	// execution for matrix 2
		printf("\n     Matrix 2 \n");	
	for (x=0; x<=1; x++)			// 2 iterations for 2 rows for matrix2
	{		//nested for loop
			for (y=0; y<=2; y++)	// 3 iteration for 3 columns for matrix2	
			{	printf("  matrix2 [%d][%d] = ", x, y );
			scanf("%d", &matrix2[x][y]);	//input the value of the specific array element for matirx2
			sum2= sum2 + matrix2[x][y];		// get the sum of each iteration
			}
	}
	
	totalsum= sum1+sum2;  	// get the total sum of the two matrices
	printf("\n\n..........  The total sum  of over all matrices is %d  ..........\n\n\n\n\n", totalsum); // print the total sum
}
