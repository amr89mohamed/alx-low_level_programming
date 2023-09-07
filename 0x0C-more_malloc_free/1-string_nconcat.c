#include "main.h"
#include <stdio.h>
/*
 * this funcation should return
 * concatenates two strings
*/char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int a, b, s1l, s2l;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (s1l = 0; s1[s1l] != '\0'; s1l++)
;
for (s2l = 0; s2[s2l] != '\0'; s2l++)
;
p = malloc(s1l + n + 1);
if (p == NULL)
{
return (NULL);
}
for (a = 0; s1[a] != '\0'; a++)
p[a] = s1[a];
for (b = 0; b < n; b++)
{
p[a] = s2 [b];
a++;
}
p[a] = '\0';
return (p);
}
