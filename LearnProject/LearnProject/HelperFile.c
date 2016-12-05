//
//  HelperFile.c
//  LearnProject
//
//  Created by MacBookPro on 12/5/16.
//  Copyright © 2016 MacBookPro. All rights reserved.
//

#include "HelperFile.h"


float SumFloat(float *a, float *b){
	float x=*a,y=*b;
	return x+y;
}

void BasicSwitchStatement(){
	/*Note - Incorect like this because it violates some security issues
	 * the printf statement should not be used with only one argument like this: printf("1 = true\n");
	 * if we want the newline character at the end this method should be converted to puts("1 = true");
	 * if we want the space character at the end we should not use: printf("Welcome "); but we should use printf("%s", "Welcome");
	 */
	puts("1 = true");
	puts("2 = false");
	puts("3 = null");
	int condition = GetInput();
	switch (condition) {
		case 1:
			puts("True");
			break;
		case 2:
			puts("False");
			break;
		case 3:
			puts("Null");
			break;
		default:
			puts("Number not in the initial list");
			break;
	}
}

void CallSum(){
	int x = GetInput("Give First Number:"),y = GetInput("Give Second Number:");
	printf("The sum of the 2 numbers is: %d\n", Sum(x,y));
}

void BasicDoWhileLoop(){
	
	int x=0;
	int condition = GetInput();
	do{
		printf("Executed %d times \n", x);
		x++;
	}while (x < condition);
}

void BasicWhileLoop(){
	int x = 0;
	int condition = GetInput();
	
	while (x<condition) {
		printf("Executed %d times \n", x);
		x++;
	}
}

void BasicForLoop(){
	int repetitions = GetInput();
	for(int i=0; i<repetitions; i++){
		printf("Repetition: %d \n", i);
	}
}

void CheckAge(){
	
	int age;
	age = GetInput("Give your age: ");
	
	if(age < 18)
		puts("Minor");
	else
		puts("Major");
}

int GetInput(char str[50]){
	
	int number;
	printf("%s", str);
	scanf("%d", &number);
	return number;
}

void SimpleIntDisplay(){
	
	int x;
	printf("%s", "Give int:");
	scanf("%d", &x);
	
	printf("The number you inputed was: %d \n", x);
	printf("The number's address location is: %p \n", &x);
}

int Sum(int a, int b){
	return a+b;
}

int Diff(int a, int b){
	return Sum(a, -b);
}

int Prod(int a, int b){
	return a*b;
}

void DivisionCall(int a, int b){
	if(b!=0)
		printf("%d", Division(a,b));
	else
		puts("Division by zero is not allowed");
}

int Division(int a, int b){
	return Prod(a,1/b);
}

void ShowIntResult(int result){
	printf("The result is: %d \n", result);
}

void SumOperation(){
	ShowIntResult(Sum(GetInput(GENERICMSG), GetInput(GENERICMSG)));
}

void Calculator(){
	int choice = GetInput("Select operation: 1- Sum, 2- Diff, 3- Prod, 4- Division\n");
	switch (choice) {
		case 1:
			SumOperation();
			break;
		case 2:
			ShowIntResult(Diff(GetInput(GENERICMSG), GetInput(GENERICMSG)));
			break;
		case 3:
			ShowIntResult(Prod(GetInput(GENERICMSG), GetInput(GENERICMSG)));
			break;
		case 4:
			DivisionCall(GetInput(GENERICMSG), GetInput(GENERICMSG));
			break;
		default:
			puts("The operation is not in the list");
			break;
	}
}
