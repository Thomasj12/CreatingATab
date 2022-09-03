#include <stdio.h>
#include <stdlib.h>

int main()
{
	//variables 
	char choice;
	char appetizer;
	char restOfMenu;
	char sectionOfMenu;
	char whichBurger;
	char whichSalad;
	char whichWrap;
	char lookAtMenu;
	char iceCream;
	char dessertList;
	int preztelBites = 8;
	int nachos = 9;
	int fries = 7;
	int baconBurger = 13;
	int cheeseBurger = 11;
	int glutenFreeBurger = 11;
	int chickenCeaserSalad = 11;
	int pastaSalad = 9;
	int chickenwrap = 12;
	int coldcutwrap = 10;
	int vanilla = 7;
	int chocolate = 7; 
	int lavaCake = 8;
	int sum;
	float tax = .08;
	float total;
	sum = 0;
	total = 0;
	




	//asking if thye want to see the appetizer menu
		printf("Do you want to see the appetizer menu: (y/n): ");
		scanf(" %c", &choice);
		printf("\n");
	
			if (choice == 'y')
			{
			//listing the appetizer options
			printf("here is the menu along with their prices.\n");
			printf("pretzel bites .........$%d\n", preztelBites);
			printf("nachos ................$%d\n", nachos);
			printf("fries .................$%d\n", fries);
		
		
		
			printf("Which appetizer would you like? type p for pretzel bites, n for nachos, and f for fries and N for nothing: ");
			scanf(" %c", &appetizer);
		
		
				if (appetizer == 'p')
				{ 
					sum += preztelBites;
					printf("Your total cost is $%d\n", sum);
				} 	else if (appetizer == 'n')
				{
					sum += nachos;
					printf("Your total cost is $%d\n", sum);
				} 	else if (appetizer == 'f') 
				{
					sum += fries;
					printf("Your total cost is $%d\n", sum);
				} 	else if(appetizer == 'n')
				{} else
				{
					printf("Please choose a correct choice.");
					return 0;
				}
			}	
			else
			{}
			
	
	//asking which part of the menu you would like to see
	printf("Would you like to order anything else? (y/n): ");
	scanf(" %c", &restOfMenu);

	while (restOfMenu == 'y')
	{
		
		printf("Which part of the menu would you like to see? We have:\n");
		printf(" burgers\n salads\n wraps \n desserts\n");
		printf("choose b for burgers, s for salads, w for wraps, and d for desserts:");
		scanf(" %c", &sectionOfMenu);
		
		//Burger section
		if(sectionOfMenu == 'b')
		{
			printf("here are your choices of burgers.\n");
			printf("bacon burger ..................$%d.\n", baconBurger);
			printf("	contains bacon, ground beef, pickes, tomatoes, and lettuce on a pretzel bun.\n");
			printf("cheese burger .................$%d.\n", cheeseBurger);
			printf("	contains american cheese, ground beef, lettuce, pickles, and tomatoes on a pretzle bun.\n");
			printf("gluten free burger ............$%d.\n", glutenFreeBurger);
			printf("	contains everything in the cheeseburger but replaced with gluten free buns.\n");
			
			
			printf("Please choose b for bacon burger, c for cheeseburger, g for gluten free burger, if you want none choose n for none: ");
			scanf(" %c", &whichBurger);
			
				if(whichBurger == 'b')
				{	
					sum += baconBurger;
					printf("your total is now $%d\n", sum);
				} else if (whichBurger == 'c')
				{
					sum += cheeseBurger;
					printf("your total is now $%d.\n", sum);
				} else if (whichBurger == 'g')
				{
					sum += glutenFreeBurger;
					printf("your total is now $%d.\n", sum);
				} else if(whichBurger == 'n')
				{}
						
			
		} 
		//menu for salads
		else if (sectionOfMenu == 's')
		{
			printf("Here are your selections of salads: \n");
			printf("Chicken Ceaser Salad ............$%d.\n", chickenCeaserSalad);
			printf("Salad with pasta ................$%d.\n", pastaSalad);
			printf("Choose a salad, c for chicken ceaser salad, p for salad with pasta, and n for none: ");
			scanf(" %c", &whichSalad);
			
			if (whichSalad == 'c')
			{
				sum += chickenCeaserSalad;
				printf("Your total is now $%d.\n", sum);
			} else if (whichSalad == 'p')
			{ 
				sum += pastaSalad;
				printf("Your total is now $%d.\n", sum);
			} else if (whichSalad == 'n')
			{}
		}
		//Menu for wraps
		else if (sectionOfMenu == 'w')
		{
			printf("Here are your selections of wraps: \n");
			printf("Chicken wrap ............$%d.\n", chickenwrap);
			printf("Cold cut wrap ...........$%d.\n", coldcutwrap);
			printf("Choose a wrap, c for Chicken wrap, w for cold cut wrap, and n for neither: ");
			scanf(" %c", &whichWrap);
		
			if (whichWrap == 'c')
			{
				sum += chickenwrap;
				printf("Your total is now $%d.\n", sum);
			}else if (whichWrap == 'w')
			{
				sum += coldcutwrap;
				printf("Your total is now $%d.\n", sum);
			}
		}
		//Menu for desserts
		else if (sectionOfMenu == 'd')
		{
			printf("here are your selections for dessert: \n");
			printf("Ice Cream .............$%d.\n", iceCream);
			printf("	Choice of vanilla or chocolate\n");
			printf("Lava Cake .............$%d.\n", lavaCake);
			printf("Choose your dessert, i for ice cream, l for lava cake, and n for neither");
			scanf(" %c", &dessertList);
			
			if (dessertList == 'i')
			{
				printf("would you like Vanilla or Chocolate? (v/c): ");
				scanf(" %c", &iceCream);
				if (iceCream == 'v')
				{ 
					sum += vanilla;
					printf("Your total is now $%d.\n", sum);
				} else if (iceCream == 'c')
				{ 
					sum += chocolate;
					printf("Your total is now $%d.\n", sum);
				}
			} else if (dessertList == 'l')
			{
				sum += lavaCake;
					printf("Your total is now $%d.\n", sum);
			}
		}
		printf("Would you like to order anything else? (y/n): ");
		scanf(" %c", &restOfMenu);
			
			
					
		 
	}
		
		printf("Your total before tax is $%d.\n", sum);
		
		total = (sum * tax) + sum;
		printf("Your total after tax is $%f.\n", total);


return 0;
}