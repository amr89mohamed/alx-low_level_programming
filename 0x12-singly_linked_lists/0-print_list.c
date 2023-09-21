#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
  * print_list - prints elements of a list_t
  * @h: is the single linked list
  * Return: number of nodes in the list
  */
size_t print_list(const list_t *h)
{
size_t x;
for (x = 0; h; x++)
{
printf("[%d] %s\n", h->len, h->str);
h = h->next;
}
return (x);
}
