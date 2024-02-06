#include "lists.h"
/*
 * this funcation will return a spacfic
 * node to the main fun, using @count to spacify
 * the node index number
*/listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
listint_t *ptr;
ptr = head;
while (count < index)
{
count++;
ptr = ptr->next;
}
if (ptr == NULL)
{
return (NULL);
}
return (ptr);
}
