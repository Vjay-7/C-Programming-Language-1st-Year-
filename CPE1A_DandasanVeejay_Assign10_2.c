#include <stdio.h>

 char a[] = "\"A!- Excellent\"";		// global variables for string outputs
 char b[] = "\"B!- Good\"";
 char c[] = "\"C!- Poor\"";
void main()
{	
	char v[];
	int x;
	printf("\n\n\t   Enter student's grade: ");
	scanf("%d", &x);
	&v= EquiGrade(x);
	if (x>100||x<0) printf("\n\t\t\t\tInvalid Grade\n\n");																			// it execute if the input is negative and above 100 value
	else printf("\n\t The student's %d grade is %s\n\n",x, v);			// it prints the grade and the return value from the function in string type
	
}

int EquiGrade(int x)
 {
 	if (x>=90)
 		return &a;				// it returns the memory address of string a
 	else if (x>=75 && x<90)
 		return &b;				// it returns the memory address of string b
 	else if (x<75)
 		return &c;				// it returns the memory address of string c
 }
