#include <stdlib.h>
#include "lists.h"

/**
  * free_list - will rfree 
  * head  - this is the pointer
  *
  * Return - blank
  */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

	free(head);
}
