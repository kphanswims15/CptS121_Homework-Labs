#include "LinkedList.h"

int main (void)
{
	Node * pHead = NULL;
	int iter = 0, num = 0, number = 0;

	printf ("How many numbers do you want in a list: ");
	scanf ("%d", &num);

	while (iter < num)
	{
		printf ("Number: ");
		scanf ("%d", &number);
		insertInOrder (&pHead, number);
		iter++;
	}

	printList (pHead);

	printf ("Deleting...\n");
	for (iter = 0; iter < 2; iter++)
	{
		printf ("Number you want to delete: ");
		scanf ("%d", &number);
		//deleteAtFront (&pHead);
		deleteInOrder (&pHead, number);
	}
	
	printf ("New List: \n");
	printList (pHead);

	return 0;
}