#include "dog.h"
#include <stdlib.h>
/*
  * this a strlen funcation
  * should return the char len to
  * _strlen
  */int _strlen(const char *str)
{
int len = 0;
while (*str++)
len++;
return (len);
}
/*
 * this strcopy should
 * return copy to the funcat
 */char *_strcopy(char *dest, char *src)
{
int x;
for (x = 0; src[x]; x++)
dest[x] =  src[x];
dest[x] = '\0';
return (dest);
}
/*
 * this is a funcation
  */dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
if (!name || age < 0 || !owner)
return (NULL);
dog = (dog_t *) malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name =  malloc(sizeof(char) * (_strlen(name) + 1));
if ((*dog).name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if ((*dog).owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
_strcopy(dog->name, name);
_strcopy(dog->owner, owner);
dog->age = age;
return (dog);
}
