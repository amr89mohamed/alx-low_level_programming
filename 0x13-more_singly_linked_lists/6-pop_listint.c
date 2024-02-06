#include "lists.h"
/*
 * this funcation
 * will delete the first
 * node and return the first data
*/int pop_listint(listint_t **head)
{
if (*head == NULL)
{
return (0);
}
else
*head = (*head)->next;
return ((*head)->n);
}
