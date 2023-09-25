#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the list.
 * Return: number of nodes.
 **/
size_t print_listint(const listint_t *h)
{
const listint_t *no = h;
size_t c = 0;
while (no)
{
printf("%i\n", no->n);
c++;
no = no->next;
}
return (c);
}
