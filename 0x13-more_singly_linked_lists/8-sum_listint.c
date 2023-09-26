#include "lists.h"

/**
 * sum_listint - sums up all the data in a linked list
 * @head: head of the list
 *
 * Return: sum of the number
 */
int sum_listint(listint_t *head)
{
listint_t *c = head;
size_t s = 0;
while (c != NULL)
{
s += c->n;
c = c->next;
}
return (s);
}
