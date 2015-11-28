/*
OVERVIEW:  Given a single linked list (two digits as a node).Convert that to number


INPUTS:  SLL head pointer

OUTPUT: Create a number from the linked list given ,In each node there are two numbers ,digit1 and digit1 ,
So if the nodes are 12->34->56->78 , Final number would be 12345678 ( Integer)

ERROR CASES:

NOTES: Only Postive Numbers
*/

#include <stdio.h>
#include <malloc.h>

struct node
{
	int digit1;
	int digit2;
	struct node *next;
};

int convert_sll_2digit_to_int(struct node *head)
{
	if (head == NULL)
		return NULL;
	else
	{
		int num = 0;
		struct node *ptr;
		ptr = head;
		while (ptr != NULL)
		{
			num = num + ptr->digit1;
			num = num * 10;
			num = num + ptr->digit2;
			num = num * 10;
			ptr = ptr->next;
		}
		num = num / 10;
		return num;
	}
}
