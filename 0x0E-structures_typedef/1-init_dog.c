#include "dog.h"
/*
 * this the @initdog funcation
 * take @struct dog d(wheres d id a pointer to the stract dog)
 * and @name is array of charcters
 * @age is a float
 * @owner another array of strings
 * and intializ the d pointer to the
 * @name&&@age&&@owner
*/void init_dog(struct dog *d, char *name, float age, char *owner)
{
(*d).name = name;
d->age = age;
d->owner = owner;
}
