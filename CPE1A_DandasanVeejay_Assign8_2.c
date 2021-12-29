#include <stdio.h>

void main() 
{
	char str1[50], str2[50];
	int x,y;
	
	printf("\n\n   Please enter word: ");
	gets(str1);
	
		for(y=0, x=0; str1[x]!='\0'; x++, y++) 		// this loop copy the all character from str1 to str2
				str2[y]= str1[x];
				
		str1[x]= '\0';								// this indicate the termination of the str1 depends from the value of x
		
		for(x=x-2; x>=0; x--, y++)			//this loop copy the all character from str1 in reverse way to str2 in which the number of x will be subtracted by
				str2[y]= str1[x];				//2 so that the last letter of the string will not repeat
				
	// display the output of the two string variable
	printf("\n\n     Input strings str1 = \"%s\"", str1);
	printf("\n     then, palindrome str2 = \"%s\"\n\n\n", str2);
}
