#include "lists.h"

/**
 * print_listint - it prints all the elements of a linked list
 * h - linked list of type listint_t to print
 * Return - nodes number
 */

size_t print_listint(const listint_t *h)
{
size_t count;

if (h == NULL)
return (0);
for (count = 0; h != NULL; count++)
{
printf("%d\n", h->n);
h = h->next;
}
return (count);
}
