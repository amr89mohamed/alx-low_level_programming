#include "main.h"
#include <stdlib.h>
/*
 *this funcation
 *find the lenth of the string
*/int _strlen(char *c)
{
int size = 0;
for (; c[size] != '\0'; size++)
;
return (size);
}
/*
 * the funcation should return
 * the concatenates two strings.
 */char *str_concat(char *s1, char *s2)
{
int siz1, siz2, x;
char *k;
if (s1 == 0)
s1 = "\0";
if (s2 == 0)
s2 = "\0";
siz1 = _strlen(s1);
siz2 = _strlen(s2);
k = malloc((siz1 + siz2)*sizeof(char) + 1);
if (k == 0)
return (0);
for (x = 0; x <= siz1 + siz2; x++)
{
if (x < siz1)
k[x] = s1 [x];
else
k[x] = s2 [x - siz1];
}
k[x] = '\0';
return (k);
}