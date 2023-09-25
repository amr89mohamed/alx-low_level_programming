#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the list.
 * Return: number of nodes.
 **/
size_t listint_len(const listint_t *h)
{
const listint_t *no = h;
size_t co = 0;
while (no)
{
co++;
no = no->next;
}
return (co);
}
