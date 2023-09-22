#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len -  elements of a list
  * h - THIS IS  A linked list
  *
  *
  * Return - NO Oof elements of a list
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
