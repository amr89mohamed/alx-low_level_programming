#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/*
 * _strlen - return length of a string
 * @s: char type
 * Return:  length of string
 */int _strlen(char *s)
{
int x;
for (x = 0; s[x] != '\0'; x++)
{
}
return (x);
}

/*
 * *_strdup - function to return pointer to string
 * @str: pointer to string array input
 * Return: pointer to string created
 */char *_strdup(char *str)
{
char *ptr;
int size;
int i;
if (str == NULL)
{
return (NULL);
}
size = _strlen(str) + 1;
ptr = malloc(size *sizeof(char));
i = 0;
while (i < size)
{
if (ptr == NULL)
{
return (NULL);
}
ptr[i] = str[i];
i++;
}
return (ptr);
}
