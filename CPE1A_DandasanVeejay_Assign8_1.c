#include <stdio.h>

void main() 
{
	char str1[50], str2[50], str3[50], *p;
	int x,y,z;

	printf("\n\n     Please enter str1: ");
	gets(str1);
	printf("     Please enter str2: ");
	gets(str2);
	printf("\n\n");

	// concatenation of the str1 and str2 to str3
	
	
// concatenation of str1 and str3		
	printf("\n   The input of str1 = \"%s\"", str1); 
	for( z=0, x=0; str1[x]!='\0'; x++, z++)      		// copying the all character from str1 to str3
		{
			str3[z]=str1[x];							// common pointer notation for each character in  str1
		}
	printf("  ");										// unecessary statement, it is just for spacious display
	
// concatenation of str2 and str3	
    for(y=0; *(str2+y)!='\0'; y++, z++)		// continue to copy each character of str2 to str3
    	{
       		str3[z]=*(str2+y);  			//pointer notation *(str2 +y)
   		}
    str3[z]='\0';  							// to terminate the last character for str3
    printf("\n   The input of str2 = \"%s\"", str2);
    printf("  "); 							// unecessary statement, it is just for spacious display
    
    
 // total concatenation or the over all str3
    printf("\n   The output of str3 = \"");
    for( p=str3, z=0; z<=(x+y); z++)    				// Declare a character pointer were p = str3 or &str3[0]
    	{
      		 printf("%c",*p++);  					// it checks each characters manually to the  each memory address of str3
    	}
    printf("\"");									// this is for the quotation mark display
    
    
    
   // to sum-up the total number of each strings
   	printf("\n\n");
   		for( x=0; str1[x]!='\0'; x++);
			printf("\n   Length of str1 = %d ", x);			// a loop were manually check each character and store the quantity 
  	    for( y=0; str2[y]!='\0'; y++);
			printf("\n   Length of str1 = %d ", y);			// a loop were manually check each character and store the quantity 
   		for( z=0; str3[z]!='\0'; z++);
			printf("\n   Length of str1 = %d ", z);			// a loop were manually check each character and store the quantity 
			
}


