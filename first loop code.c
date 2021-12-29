#include<stdio.h>

int main()
{ int n, x=1, sum=0;
    printf("Input positive integer value n -->");
    scanf("%d", &n);
    for( x=1; x<=n; x++ )
    { scanf("%d",&x);
	sum= x+sum;}
    printf("Value of sum %d", sum);
} 
