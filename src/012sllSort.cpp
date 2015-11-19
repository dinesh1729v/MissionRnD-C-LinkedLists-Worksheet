/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};
void sll_012_sort(struct node *head){
	int cnt = 0,cnt0=0,cnt1=0,cnt2=0,sum=0,i;
	struct node *start = head;
	while (head != NULL)
	{
		if (head->data == 1)cnt1++;
		sum += head->data;
		head = head->next;
		cnt++;
	}
	cnt2 = (sum - cnt1) / 2;
	cnt0 = (cnt - cnt2 - cnt1);
	head = start;
	for (i = 0; i < cnt0; i++)
	{
		head->data = 0;
		head = head->next;
	}
	for (i = 0; i < cnt1; i++)
	{
		head->data = 1;
		head = head->next;
	}
	for (i = 0; i < cnt2; i++)
	{
		head->data = 2;
		head = head->next;
	}
	head = NULL;
}