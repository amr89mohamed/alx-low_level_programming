#include "main.h"
/*
 * this funcation
 * return the copies the string pointed to by src
 */char *_strcpy(char *dest, char *src)
{
int x = -1;
do {
x++;
dest[x] = src[x];
} while (src[x] != '\0');
return (dest);
}
