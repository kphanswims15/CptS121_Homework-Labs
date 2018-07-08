#include "LinkedList.h"

Node * makeNode (int incData)
{
	Node *pMem = NULL;
	pMem = (Node *) malloc (sizeof(Node));
	pMem -> data = incData;
	pMem -> pNext = NULL;
	return pMem;
}

void insertAtFront (Node **pHead, int data)
{
	Node *pMem = NULL;

	pMem = makeNode (data);
	if (*pHead == NULL)
	{
		*pHead = pMem;
	}
	else
	{
		pMem -> pNext = *pHead;
		*pHead = pMem;
	}
}

void insertInOrder (Node **pHead, int data)
{
	Node *pMem = NULL, *pTemp = NULL, *pCur = *pHead;
	int i = 0, j = 0;
	pMem = makeNode (data);

	if (*pHead == NULL)
	{
		*pHead = pMem;
	}
	else
	{
		while (pCur -> pNext != NULL && pMem -> data > pCur -> data)
		{
			pTemp = pCur;
			pCur = pCur -> pNext;
		}
		
		if (pCur == NULL)
		{
			pCur -> pNext = pMem;
		}
		else if (pTemp == NULL)
		{
			pMem -> pNext = pCur;
			*pHead = pMem;
		}
		else
		{
			pTemp -> pNext = pMem;
			pMem -> pNext = pCur;
		}
	}
}

void insertAtEnd (Node **pHead, int data)
{
	Node *pMem = NULL, *pCur = *pHead;
	pMem = makeNode (data);

	if (*pHead == NULL)
	{
		*pHead = pMem;
	}
	else
	{
		while (pCur -> pNext != NULL)
		{
			pCur = pCur -> pNext;
		}
		pCur -> pNext = pMem;
	}
}

void printList (Node *pHead)
{
	Node *pCur = pHead;

	while (pCur != NULL)
	{
		printf ("Data: %d\n", pCur -> data);
		pCur = pCur -> pNext;
	}
}

int deleteAtFront (Node **pHead)
{
	int returnData = 0;
	Node *pTemp = NULL;

	if (*pHead == NULL)
	{
		return returnData;
	}
	else 
	{
		pTemp = *pHead;
		*pHead = (*pHead) -> pNext;
		returnData = pTemp -> data;
		free(pTemp);
		return returnData;
	}
}

int deleteInOrder (Node **pHead, int data)
{
	int returnData = 0;
	Node *pCur = NULL, *pTemp = NULL, *pPrev = NULL;
	pCur = *pHead;

	if (*pHead == NULL)
	{
		return returnData;
	}
	else
	{
		while (pCur != NULL && pCur -> data != data)
		{
			pPrev = pCur;
			pCur = pCur -> pNext;
		}

		if (pPrev == NULL)
		{
			pTemp = *pHead;
			*pHead = (*pHead) -> pNext;
		}
		else if (pCur == NULL)
		{
			pTemp = pCur;
			pPrev -> pNext = NULL;
		}
		else
		{
			pTemp = pCur;
			pPrev -> pNext = pCur -> pNext;
		}

		returnData = pTemp -> data;
		free (pTemp);
	}
	return returnData;
}
