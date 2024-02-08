#include "lists.h"
/*
 * inserting fun insert a new node
 * inside a single linked list
 * @temp is the new node
 * @ count used to locat the location
 * @ptr used to move a round the linked list
*/listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp = malloc(sizeof(listint_t));
listint_t *ptr;
unsigned int count = 0;
if (temp == NULL)
return (NULL);
ptr = *head;
temp->n = n;
if (idx == 0)
{
temp->next = ptr;
*head = ptr;
return (ptr);
}
while (count <= idx + 1)
{
count++;
ptr = ptr->next;
if (ptr == NULL || ptr->next == NULL)
return (NULL);
}
temp->next = ptr;
count = 0;
ptr = *head;
while (count <= idx)
{
count++;
ptr = ptr->next;
}
ptr->next = temp;
return (*head);
}
