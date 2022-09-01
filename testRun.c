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
	float total;
	int preztelBites = 8;
	int nachos = 9;
	int fries = 7;
	int baconBurger = 13;
	int cheeseBurger = 11;
	int glutenFreeBurger = 11;
	int chickenCeaserSalad = 11;
	int pastaSalad = 9;
	int sum;
	sum = 0;
	total = 0;
	
	
	//asking if thye want to see the appetizer menu
	printf("Do you want to see the appetizer menu: (y/n): ");
	scanf(" %c", &choice);
	
		if (choice == 'y')
		{
		//listing the appetizer options
		printf("here is the menu along with their prices.\n");
		printf("pretzel bites .........$%d\n", preztelBites);
		printf("nachos ................$%d\n", nachos);
		printf("fries .................$%d\n", fries);
		
		printf("Which appetizer would you like? type p for pretzel bites, n for nachos, and f for fries and n for nothing: ");
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
		{
			printf("here is the rest of the menu\n");
			} else
		{
			printf("Please choose a correct choice.");
			return 0;
		}
		}
		else
		{
		printf("Here is the rest of the menu\n");
		}
	
	//asking which part of the menu you would like to see
	printf("Would you like to order anything else? (y/n): ");
	scanf(" %c", &restOfMenu);
	
		if (restOfMenu == 'y')
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
			
			//asking for them to choose
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
		//Salad section
		else if (sectionOfMenu == 's');
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
	
	} else if (restOfMenu == 'n')
	{
		total = sum * .08;
		printf("Your total is $%f.\n", total);
	
	}	
		
	
	return 0;
}