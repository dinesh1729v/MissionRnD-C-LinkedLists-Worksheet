/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include<stdlib.h>
struct node {
	int num;
	struct node *next;
};
struct node * removeEveryKthNode(struct node *head, int K) {
	if (K <= 1 || head == NULL)return NULL;
	struct node *previous,*start=head;
	int i=1;
	while (head != NULL)
	{		
		if (i%K == 0)
		{
			previous->next = head->next;
		}
		i++;
		previous = head;
		head = head->next;
	}
	return start;
}
/*
previous = head->next;
head = head->next;

*/
/*
i++;
		previous = head;
		head = head->next;
		if (i%K == 0)
		{
			previous->next = head->next;
			head = head->next;
		}

*/

/*
previous = head;
		head = head->next;
		if ((i)%K == 0)
		{
			previous->next = (head->next);
			free(head);
		}
		i++;

*/