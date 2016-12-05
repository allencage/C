//
//  LinkedList.h
//  LearnProject
//
//  Created by MacBookPro on 12/5/16.
//  Copyright © 2016 MacBookPro. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h

#include "BaseHeader.h"

struct node {
	int data;
	struct node *next;
};
typedef struct node node; //this is required so you can call the struct only with node and without struct

void GenerateLinkedList();
void PrintList(node *node);
node *FindFirstItemOfLinkedList(node *head, int value);
node *InsertAtHeadOfList();
node *FindItem(node *head, int value);


#endif /* LinkedList_h */
