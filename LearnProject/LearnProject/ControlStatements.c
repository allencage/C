//
//  ControlStatements.c
//  LearnProject
//
//  Created by MacBookPro on 12/5/16.
//  Copyright © 2016 MacBookPro. All rights reserved.
//

#include "ControlStatements.h"


void SumEven(int from, int to){
	unsigned int sum;
	if(from > to)
		printf("%s", "Cannot execute!");
	else{
		for (int i=from ; i <= to; i +=2) {
			sum +=i;
		}
		printf("The even sum is: %u \n", sum);
	}
}

void CompoundInterest(){
	
	
	double amount;
	double principal;
	puts("Give initial deposit: ");
	scanf("%lf", &principal);
	double rate = .05;
	unsigned int year;
	
	printf("%4s%21s\n", "Year", "Acount on deposit");
	
	for (year = 1; year<=10; year++) {
		amount = principal * pow(1.0 + rate, year);
		
		printf("%4u%21.02f\n", year, amount);
	}
}

