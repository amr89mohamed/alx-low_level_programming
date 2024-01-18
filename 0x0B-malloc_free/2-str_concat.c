#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
 * the @str_concat fancation
 * takes two argument to it
 * of type string it will return @s3
 * with two strings cat on it
*/char *str_concat(char *s1, char *s2)
{
int i, j;
int len1;
int len2;
char *s3;
if (s1 ==  NULL || s2 == NULL)
{
return (NULL);
}
len1 = strlen(s1);
len2 = strlen(s2);
s3 = malloc((len1 + len2 + 1) * (sizeof(char)));
for (i = 0; i < len1; i++)
{
s3[i] = s1[i];
}
for (j = 0; j < len2; j++)
{
s3[j + len1] = s2[j];
}
s3[len1 + len2] = '\0';
return (s3);
}
