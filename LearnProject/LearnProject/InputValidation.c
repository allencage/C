//
//  InputValidation.c
//  LearnProject
//
//  Created by MacBookPro on 12/4/16.
//  Copyright © 2016 MacBookPro. All rights reserved.
//

#include "InputValidation.h"

void InputValidationTest(){
	int s;
	if((scanf("%d", &s))){
		printf("Accepted value: %d", s);
	}else{
		puts("Invalid value");
	}
}

int GetInt(char message[50]){
	puts(message);
	int s;
	if((scanf("%d", &s))) 	//Note - is a function that returns 1 if succesfull or 0 if not, in C, 1 and 0 have the values for true and false;
		return s;			//Note - scanf can be used with initializing multiple variables and it will return the number of inited variables, so if 2 vars it				will return 2, if 3 return 3 and so on
	else{
		puts("The input was not in the correct format. Zero has been returned!");
		return 0;
	}
}

int *GetIntPointer(char message[50]){
	puts(message);
	int *ptr = malloc(sizeof(*ptr)); //Note - memory must first be allocated because it does not have any memory where to put the input.
	if(scanf("%d", ptr))
		return ptr;
	puts("The input was not in the correct format. Null pointer has been returned!");
	free(ptr);
	return NULL;
}

