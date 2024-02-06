#include "lists.h"
/*
 * this funcation free the nodes
 * after use it
 * thin set head to NULL
*/void free_listint2(listint_t **head)
{
listint_t *ptr;
while (*head != NULL)
{
ptr = *head;
*head = (*head)->next;
free(ptr);
}
*head = NULL;
}
