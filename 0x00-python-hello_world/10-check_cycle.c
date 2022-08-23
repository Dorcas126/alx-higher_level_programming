#include<stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @list: A singly-linked list.
 *
 * Return: If there is a cycle - 1.
 */

int check_cycle(listint_t *list)
{
	listint_t *turtle, *hare;

	if(list==NULL||list->next==NULL)
		return (0);

	turtle=list->next;
	hare=list->next->next;
}

return (0);
}
