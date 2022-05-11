#include<stdio.h>
int main()
{
	int x; 
	printf("Enter a number between 1 to 5:");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			 	printf("Food item-Pizza\n");
				printf("Price- Rs239");
				break;			   		   	  
		case 2:
			 	printf("Food item-Burger\n");
				printf("Price- Rs129");	
				break;			   			   
		case 3:
			 	printf("Food item-Pasta\n");
				printf("Price- Rs179");	
				break;			   			  
		case 4:
			 	printf("Food item-French Fries\n");
				printf("Price- Rs99");
				break;			   		  	 
		case 5:
			 	printf("Food item-Sandwich\n");
				printf("Price- Rs149");	
				break;			
		default:
				printf("Can only choose number between 1 to 5")	;
    }
}