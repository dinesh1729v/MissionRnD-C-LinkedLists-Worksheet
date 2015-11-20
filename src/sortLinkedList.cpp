/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	if (head == NULL)return NULL;
	struct node *start=head;
	int cnt = 0,i,j,temp;
	while (start != NULL)
	{
		start = start->next;
		cnt++;
	}
	for (i = 0; i < cnt - 1; i++)
	{
		for (j = 0,start=head; j < cnt - i - 1; j++)
		{
			if ((start->num)>((start->next)->num))
			{
				temp = start->num;
				start->num = (start->next)->num;
				(start->next)->num = temp;
			}
			start = start->next;
		}
	}
	return head;
}