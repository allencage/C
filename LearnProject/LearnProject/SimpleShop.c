//
//  SimpleShop.c
//  LearnProject
//
//  Created by MacBookPro on 12/5/16.
//  Copyright © 2016 MacBookPro. All rights reserved.
//

#include "SimpleShop.h"


int currentBalance = 0;
void StartShopping(){
	int exitFlag = 0;
	currentBalance = 500;
	puts("Welcome to our finest shop!");
	while (currentBalance > 0 && exitFlag != 1) {
		printf("Your current balance is: %d \n", currentBalance);
		ShoppingItems();
		printf("Your current balance is: %d \n", currentBalance);
		exitFlag = DoYouWantToContinueShopping();
	}
}

int DoYouWantToContinueShopping(){
	int choice;
	puts("Do you want to continue shopping?");
	puts("1 - no ; 2 - yes");
	scanf("%d", &choice);
	return choice == 1 ? 1 : 0;
}

void ShoppingItems(){
	int choice = -1;
	puts("What would you like to buy:");
	puts("1 - shoes, 2 - T shirts, 3 - trousers, 4 - dresses, 5 - nothing, I am just looking around");
	scanf("%d", &choice);
	switch (choice) {
		case 1:
			DisplayOptions("Nike", "Adidas", "UA");
			break;
		case 2:
			DisplayOptions("Puma", "Reebok", "CK");
			break;
		case 3:
			DisplayOptions("Massimo", "Zara", "Pull&Bear");
			break;
		case 4:
			DisplayOptions("Zara", "Massimo", "Channel");
			break;
		case 5:
			puts("Hurry up and buy!");
			break;
		default:
			break;
	}
}

void DisplayOptions(char item1[50], char item2[50], char item3[50]){
	int choice = -1;
	printf("Option 1: Cost 100: %s \n", item1);
	printf("Option 2: Cost 50: %s \n", item2);
	printf("Option 3: Cost 300: %s \n", item3);
	scanf("%d", &choice);
	switch (choice) {
		case 1:
			CheckPriceBleed(100);
			break;
		case 2:
			CheckPriceBleed(50);
			break;
		case 3:
			CheckPriceBleed(300);
			break;
		default:
			puts("Option not in the list.");
			break;
	}
}

void CheckPriceBleed(int sum){
	if(currentBalance >= sum)
		currentBalance -= sum;
	else
		puts("Not enough money to buy this item!");
}
