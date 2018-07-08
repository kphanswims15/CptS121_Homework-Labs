#ifndef LINKEDLIST_H
#define LINKEDLIST_H


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *pNext;
}Node;

Node * makeNode (int incData);
void insertAtFront (Node **pHead, int data);
void insertInOrder (Node **pHead, int data);
void insertAtEnd (Node **pHead, int data);
void printList (Node *pHead);
int deleteAtFront (Node **pHead);
int deleteInOrder (Node **pHead, int data);

#endif