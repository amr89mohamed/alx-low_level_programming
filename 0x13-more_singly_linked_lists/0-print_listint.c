#include "lists.h"
/*
 * This print_list funcation
 * @count will count the elemints of the list
 * for each itration
 * @ptr will hold the address on the h
*/size_t print_listint(const listint_t *h)
{
size_t count = 0;
listint_t *ptr;
ptr = (listint_t *)h;
if (h == NULL)
{
return (1);
}
while (ptr != NULL)
{
count++;
printf("%i\n", ptr->n);
ptr = ptr->next;
}
return (count);
}
