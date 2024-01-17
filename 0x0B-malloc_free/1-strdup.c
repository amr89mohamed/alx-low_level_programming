#include "main.h"
#include <stdlib.h>
#include <string.h>
/*
 * this funcation return the
 * pointer to a new created array
 * to copy an exested array
*/char *_strdup(char *str)
{
char *cp;
int i;
int len;
if (str == NULL)
{
return (NULL);
}
len = strlen(str);
cp = malloc((len + 1)  * (sizeof(char)));
for (i = 0; i < len + 1; i++)
{
if (cp == NULL)
{
return (NULL);
}
cp[i] = str[i];
}
cp[len] = '\0';
return (cp);
}
