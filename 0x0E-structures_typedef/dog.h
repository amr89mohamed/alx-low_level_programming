#ifndef DOG_H
#define DOG_H
/*
* this struct types
* @name is astring arry
* @age is a float varibal
* @owner is a string arry
*/struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
