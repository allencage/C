//
//  Structs.c
//  LearnProject
//
//  Created by MacBookPro on 12/4/16.
//  Copyright © 2016 MacBookPro. All rights reserved.
//

#include "Structs.h"


void Ex1_Structs(){
	Book book;
	
	book.id = 1000;
	strcpy(book.author, "Charles Bukowsky");
	strcpy(book.title, "Femei");
	book.noPages = 150;
	
	PrintBookDetails(book);
}



void StructExercise(){
	
	Book book1, book2;
	
	book1.id = 101;
	book1.noPages = 150;
	strcpy(book1.author, "Charles Bukowsky");
	strcpy(book1.title, "Women");
	
	book2.id = 102;
	book2.noPages = 100;
	strcpy(book2.author, "Chuck Palahniuk");
	strcpy(book2.title, "Fight Club");
	
	PrintBookDetails(book1);
	PrintBookDetails(book2);
}

void PrintBookDetails(Book book){
	printf("Book name: %s\n", book.title);
	printf("Book author: %s\n", book.author);
	printf("Number of pages: %d\n", book.noPages);
	printf("Book ID: %d\n", book.id);
}

void StructExerciseWithPointers(){
	
	Book book1, book2, *p1, *p2;
	
	p1 = &book1;
	p2 = &book2;
	
	p1->id = 101;
	p1->noPages = 150;
	strcpy(p1->author, "Charles Bukowsky");
	strcpy(p1->title, "Women");
	
	book2.id = 102;
	book2.noPages = 100;
	strcpy(book2.author, "Chuck Palahniuk");
	strcpy(book2.title, "Fight Club");
	
	PrintBookDetailsUsingPointers(p1);
	PrintBookDetailsUsingPointers(p2);
}

void PrintBookDetailsUsingPointers(Book *book){
	printf("Book name: %s\n", book->title);
	printf("Book author: %s\n", book->author);
	printf("Number of pages: %d\n", book->noPages);
	printf("Book ID: %d\n", book->id);
}
