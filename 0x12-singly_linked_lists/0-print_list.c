#include "lists.h"
/*
 * this fun will return the number of nodes
 * using @i to count the number
 * of it using while loop
*/size_t print_list(const list_t *h)
{
size_t i = 0;
while (h)
{
if (h->str == NULL)
printf("[0](nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
i++;
h = h->next;
}

return (i);
}
