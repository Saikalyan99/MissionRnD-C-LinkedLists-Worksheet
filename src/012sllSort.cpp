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

struct node
{
	int data;
	struct node *next;
};

void swap(struct node *ptr, struct node *ptrN);
void sll_012_sort(struct node *head)
{
	if (head == NULL)
		return;
	else
	{
		int flag = 1;
		struct node *ptr, *indexptr = NULL;
		while (flag != 0)
		{
			flag = 0;
			ptr = head;
			while (ptr->next != indexptr)
			{
				if (ptr->data > ptr->next->data)
				{
					swap(ptr, ptr->next);
					flag = 1;
				}
				ptr = ptr->next;
			}
			indexptr = ptr;
		}
	}
}
void swap(struct node *ptr, struct node *ptrN)
{
	int temp;
	temp = ptr->data;
	ptr->data = ptrN->data;
	ptrN->data = temp;
}