#include "lists.h"
/*
 * This fun return @head
 * if the @head == NULL
 * assign @temp address to pointer head
 * and travirs pointer till the last node
 * then add the new node address to the last node
*/listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp = malloc(sizeof(listint_t));
listint_t *ptr;
if (temp == NULL)
{
return (NULL);
}
temp->n = n;
temp->next = NULL;
if (*head == NULL)
*head = temp;
else
{
ptr = *head;
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = temp;
}
return (*head);
}
