#include "lists.h"
/*
 * this funcation
 * will delete the first
 * node and return the first data
*/int pop_listint(listint_t **head)
{
listint_t *temp;
int data;
if (*head == NULL)
{
return (0);
}
temp = *head;
data = temp->n;
*head = (*head)->next;
free(temp);
return (data);
}
