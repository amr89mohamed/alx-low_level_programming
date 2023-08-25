#include "main.h"
#include <stdio.h>
#include <string.h>
/*
 *function that concatenates two strings.
 */char *_strncat(char *dest, char *src, int n)
{
int len = 0;
n = 0;
while (dest[len] != '\0')
{
len++;
}
while (src[n] != '\0')
{
dest[len + n] = src[n];
n++;
}
dest[len + n] = '\0';
return (dest);
}
