#include "lists.h"
/*
 * The free_list fun
 * will free the node after cheack
 * all nodes
*/void free_listint(listint_t *head)
{
listint_t *ptr;
while (head != NULL)
{
ptr = head;
head = head->next;
free(ptr);
}
}
