#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: pointer to the head of the list
 * @index: index of the node to be added
 *
 * Return: the address of the node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *next_node;
unsigned int i;
if (head == NULL || *head == NULL)
return (-1);
temp = *head;
if (index == 0)
{
*head = temp->next;
free(temp);
return (1);
}
for (i = 0; temp != NULL && i < index - 1; i++)
temp = temp->next;
if (temp == NULL || temp->next == NULL)
return (-1);
next_node = temp->next->next;
free(temp->next);
temp->next = next_node;
return (1);
}
