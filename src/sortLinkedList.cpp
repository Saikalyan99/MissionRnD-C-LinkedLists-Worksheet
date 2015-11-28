/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node
{
	int num;
	struct node *next;
};
void num_swap(struct node *ptr, struct node *ptrN);

struct node * sortLinkedList(struct node *head)
{
	if (head == NULL)
		return NULL;
	else
	{
		struct node *ptr, *indexptr = NULL;
		int flag = 1;
		while (flag != 0)
		{
			flag = 0;
			ptr = head;
			while (ptr->next != indexptr)
			{
				if (ptr->num > ptr->next->num)
				{
					num_swap(ptr, ptr->next);
					flag = 1;
				}
				ptr = ptr->next;
			}
			indexptr = ptr;
		}
		return head;
	}
}
void num_swap(struct node *ptr, struct node *ptrN)
{
	int temp;
	temp = ptr->num;
	ptr->num = ptrN->num;
	ptrN->num = temp;
}