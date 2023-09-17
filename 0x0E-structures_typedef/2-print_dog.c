#include "dog.h"
#include <stdio.h>
/*
 * this funcation should
 * return the print dog
 */void print_dog(struct dog *d)
{
if (d)
{
printf("name:%s\n", d->name ? d->name : "(nil)");
printf("name:%f\n", d->age);
printf("name:%s\n", d->owner ? d->owner : "(nil)");
}
}
