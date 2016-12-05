//
//  Structs.h
//  LearnProject
//
//  Created by MacBookPro on 12/4/16.
//  Copyright © 2016 MacBookPro. All rights reserved.
//

#ifndef Structs_h
#define Structs_h

//Note - declare structs in the header file or in another file or in a separate header file that you import in the base header

#include "BaseHeader.h"

typedef struct{ //Note - this type of struct cannot self referentiate to itself
	int id;
	char title[50];
	char author[50];
	int noPages;
	//Book *next; //Note - it is not possible for usage in linked lists
}Book;

struct Books{
	int test;
};
typedef struct Books Books; //Note - this notation is better to be used because of the utility of it further down the road when you will work with linked lists and trees

struct test{
	int val;
	struct test *next;
};
typedef struct test test;

void Ex1_Structs();
void StructExercise();
void PrintBookDetails(Book book);
void StructExerciseWithPointers();
void PrintBookDetailsUsingPointers(Book *book);


#endif /* Structs_h */
