#include <stdio.h>
#include "dog.h"
/*
 * this funcation should return init_dog to
 * the main funcation
 * as the init_dog contain
*@name the name of the dog
*@age the age of the dog
*@owner the owner name
*/void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
