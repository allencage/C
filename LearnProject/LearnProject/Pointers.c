//
//  Pointers.c
//  LearnProject
//
//  Created by MacBookPro on 12/4/16.
//  Copyright © 2016 MacBookPro. All rights reserved.
//

#include "Pointers.h"

void Ex1_Pointers(){ //Note - pointer without allocation of memory before calling it
	int x = GetInt(GENERICMSG), *ptr;
	printf("Pointer address before init: %p\n", ptr); //Note - this is a NULL pointer
	if(ptr != NULL){
		printf("Pointer address before init: %d\n", *ptr);
	}
	ptr = &x;
	printf("Pointer address: %p\n", ptr);
	printf("Pointer value: %d\n", *ptr);
}

void Ex2_Pointers(){ //Note - pointer with allocation of memory
	int x = GetInt(GENERICMSG), *ptr = malloc(sizeof(*ptr));
	printf("Pointer address before init: %p\n", ptr);
	if(ptr != NULL){ //Note - this is not a NULL pointer
		printf("Pointer address before init: %d\n", *ptr);
	}
	ptr = &x;
	printf("Pointer address: %p\n", ptr);
	printf("Pointer value: %d\n", *ptr);
}

void Ex3_Pointers(){ //Note - exercise with freeing of pointer and allocating NULL to it
	int *ptr = malloc(sizeof(*ptr));
	printf("Pointer address before init: %p\n", ptr);
	if(ptr != NULL){ //Note - this is not a NULL pointer
		printf("Pointer address before init: %d\n", *ptr);
	}
	*ptr = 10;
	printf("Pointer address: %p\n", ptr);
	printf("Pointer value: %d\n", *ptr);
	free(ptr);
	ptr = NULL;
	printf("Pointer address after free : %p\n", ptr);
	if(ptr != NULL){ //Note - this is a NULL pointer after free
		printf("Pointer address before init: %d\n", *ptr);
	}
}

void Ex4_Pointers(){ //Note - dynamic memory allocation
	char *ptr = malloc(15 * sizeof(*ptr));
	strcpy(ptr, "Batman is: ");
	
	ptr = realloc(ptr, 25);
	strcat(ptr, "Bruce Wayne");
	
	puts(ptr);
	free(ptr);
	ptr = NULL;
}

void Ex5_Pointers(){ //Note - try change int without pointer
	int a = GetInt(GENERICMSG);
	SimpleChangeInt(a);
	printf("%d\n", a);
}

void Ex6_Pointers(){ //Note - change int with reference
	int a = GetInt(GENERICMSG);
	ChangeIntWithPointer(&a, 5);
	printf("%d\n", a);
}

void Ex7_Pointers(){ //Note - use only pointers
	int *ptr = malloc(sizeof(*ptr));
	ptr = GetIntPointer(GENERICMSG);
	printf("%d\n", *ptr);
	ChangeIntWithPointer(ptr, 10);
	printf("%d\n", *ptr);
}

void SimpleChangeInt(int a){
	a += 5;
	printf("a din functie %d\n", a);
}

void ChangeIntWithPointer(int *a, int amount){
	*a += amount;
	printf("a din ChangeIntWithPointer %d\n", *a);
}
