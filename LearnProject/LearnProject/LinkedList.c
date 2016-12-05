//
//  LinkedList.c
//  LearnProject
//
//  Created by MacBookPro on 12/5/16.
//  Copyright © 2016 MacBookPro. All rights reserved.
//

#include "LinkedList.h"


void GenerateLinkedList(){
	node *head, *tmp;
	
	head = InsertAtHeadOfList();
	PrintList(head);
	tmp = FindFirstItemOfLinkedList(head, 7);
	PrintList(tmp);
	tmp = FindItem(head, 7);
	PrintList(tmp);
	
}

node *InsertAtHeadOfList(){
	node *head, *tmp;
	head = NULL;
	for(int i=0; i<10; i++){
		tmp = malloc(sizeof(node));
		tmp->data = i;
		tmp->next = head;
		head = tmp;
	}
	return head;
}

void PrintList(node *node){
	while (node != NULL) {
		printf("%d\n", node->data);
		node = node->next;
	}
}

node *FindFirstItemOfLinkedList(node *head, int value){
	node *tmp;
	tmp = head;
	while (tmp != NULL) {
		if(tmp->data == value)
			return tmp;
		tmp = tmp->next;
	}
	return NULL;
}

node *FindItem(node *head, int value){
	node *tmp, *returnNode;
	tmp = head;
	while (tmp != NULL) {
		if(tmp->data == value)
		{
			returnNode = tmp;
			returnNode->next = NULL;
			return returnNode;
		}
		tmp = tmp->next;
	}
	return NULL;
}
