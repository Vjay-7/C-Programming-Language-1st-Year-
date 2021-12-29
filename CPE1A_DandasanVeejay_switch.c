#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>
#define SWbch 500
#define VDs 650
#define SS 400
#define dSWbch 100  //20% discount
#define dVDs 325	//50% discount
#define dSS 120		//30% discount

main()
{   char name [30], purch, cont, pass[10], re;
	int value, cost1, cost2=0, cost3, total, cash, change, quantity, quantity1, quantity2, quantity3=0;
		
	
	printf("\n\n\t\t\t          ~~~~ Welcome to the VaderJay Souvenir Store ~~~~");
	printf("\n\n\t\t Username: ");
	gets(name);
	printf("\t\t Password: ");
	gets(pass);
	value =strcmp(pass,"admin");
	system("cls");
do
{
	if(value==0)
	{		
			printf("\n  --------------------------------------------------------------------------------------------------------------------\a");
			printf("\n\t\t             ~~~~~~~~~~ Welcome to the VaderJay Souvenir Store ~~~~~~~~~~  ");
			printf("\n  --------------------------------------------------------------------------------------------------------------------\n");
			printf("\n\n \t\t\t              .....T-shirts discount promo!!.....\n");
			printf("\n\t\t\t\t     [a.]Star Wars Planet Beach Shirt (P500)");
			printf("\n\t\t\t\t     [b.]Surfing Darth Vader Shirt (P650)");
			printf(" \n\t\t\t\t     [c.]Sunset Stormtrooper (P400)");
			printf("\n\n\n << Hello '%s' please choose from the options >>", name);
			printf("\n\n ----What t-shirt item design is purchase? ");
			scanf("%c",&purch);scanf("%c");
			printf(" ----How many t-shirt item being purchase? ");
			scanf("%d",&quantity);
			
			
			switch(purch)
		{
			case 'a':
				cost1= quantity*(SWbch-dSWbch);
        		printf("\n\t\t\t  [You chose %d Star Wars Planet Beach Shirt with 20 percent off= P%d]", quantity,cost1);
        		quantity1= quantity;
        		break;
        	case 'b':
        		cost2= quantity*(VDs-dVDs)+cost2;
        		printf("\n\t\t\t   [You chose %d Surfing Darth Vader Shirt with 50 percent off= P%d]", quantity,cost2);
				quantity2= quantity; break;
			case 'c':
				quantity3= quantity+quantity3;
				cost3= quantity*(SS-dSS);
        		printf("\n\t\t\t  [You chose %d Sunset Stormtrooper Shirt with 30 percent off= P%d]", quantity,cost3);
				break;
			default: printf("Invalid choice!");
		}   
			printf("\n\n  Is there additional item? [y/n] "); scanf("%d");
			scanf("%c",&cont);scanf("%c");
			system("cls");
        }    
	else 	{
			printf("\n\n\n\t\t\t\t       Sorry but you're not allowed to access!!'");}
}	
	while (cont=='y'||cont=='Y');
	
if (value==0) 
{
	system("cls");
		do{
			printf("\n\n\n\tItem 1 with 20 percent off is %d", cost1);
			printf("\n\tItem 2 with 50 percent off is %d", cost2);
			printf("\n\tItem 3 with 30 percent off is %d", cost3);
			total= cost1+cost2+cost3;
			printf("\n\n\t\t\t   ^^^The total cost with discount is %d pesos^^^\n", total);
			printf("\nPlease enter the amount --> ");
			scanf("%d", &cash);
			scanf("%c");
	if (cash>=total)
	{
		system("cls");
		change= cash-total;
		printf("\n\n\t\t\t     ~~~~~~~~~~~~~~~ RECEIPT~~~~~~~~~~~~~~~~~~");
		printf("\n\n\n\t\t[%d piece/s Star Wars Planet Beach Shirt [P500] with 20 percent off= P%d]",quantity1, cost1);
		printf("\n\t\t[%d piece/s of Surfing Darth Vader Shirt [P650] with 50 percent off= P%d]",quantity2, cost2);
		printf("\n\t\t[%d piece/s Sunset Stormtrooper Shirt [P400] with 30 percent off= P%d]",quantity3, cost3);
		printf("\n\n\t\t\t      ^^^The total cost is %d pesos^^^\n", total);
		printf("\n\t\t\t         The cash amount is %d pesos", cash);
		printf("\n\t\t\t         Your change is %d pesos", change);
		printf("\n\n\n\t\t      Hope you enjoy shopping, hope you soon to comeback!");
		printf("\n\t\t\t    ````Thank you for coming and God bless````");
		printf("\n\n\n\t\t      \t\t   MAY THE FORCE BE WITH YOU");
		printf("\n   Cashier: %s\n\n\n", name);
		break;
	}
	
	else
	{
		printf("\t\t\t[Invalid amount:]\n \tPlease enter 'r' to re-enter amount ==>  ");
		scanf("%c",&re);scanf("%c");
		system("cls");
	}
} 
while (re=='r'||re=='R');
}
	else
	{
		printf("\n\t\t\t\t\t   ...Please re-run the program...\n\n");
	}

}



