/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node 
{
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) 
{
	node *new_node, *pointer, *start = NULL;
	new_node = (struct node *)malloc(sizeof(struct node));
	if (N == 0)
	{
		new_node->num = N;
		new_node->next = NULL;
		start = new_node;
	}
	else
	{
		int Arr[50], index = 0;
		if (N < 0)
			N = -N;
		while (N != 0)
		{
			Arr[index] = N % 10;
			N = N / 10;
			index++;
		}
		index--;
		while (index != -1)
		{
			new_node = (struct node *)malloc(sizeof(struct node));
			new_node->num = Arr[index];
			new_node->next = NULL;
			if (start == NULL)
			{
				start = new_node;
				pointer = new_node;
			}
			else
			{
				pointer->next = new_node;
				pointer = new_node;
			}
			index--;
		}
	}
	return start;
}