#include "lists.h"
#include <stdio.h>
/**
 * _strlen - returns the lenth of a string
 * @s: is string will be checked with _strlen
 *
 * Return: the lenth of string
 */
int _strlen(char *s)
{
int i = 0;
if (!s)
return (0);
while (*s++)
i++;
return (i);
}

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 * Return: The number of nodes in h.
 */
size_t print_list(const list_t *h)
{
size_t nodes = 0;
while (h)
{
printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
h = h->next;
nodes++;
}
return (nodes);
}
