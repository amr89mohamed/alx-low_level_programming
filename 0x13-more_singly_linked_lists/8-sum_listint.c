#include "lists.h"
/*
 * sum_listint fun will add each int in the
 * data node to the next node
*/int sum_listint(listint_t *head)
{
int sum = 0;
if (head == NULL)
{
return (0);
}
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
