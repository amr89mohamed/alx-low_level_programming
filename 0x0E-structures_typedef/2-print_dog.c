#include <stdio.h>
#include "dog.h"
/*
 * this the print_dog funcation
 * take @stract dog pointer as argument
 * and return nothing
*/void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
