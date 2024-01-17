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
int len = strlen(str);
cp = malloc((len + 1) * (sizeof(char)));
if (str == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
cp[i] = str[i];
}
free(cp);
return (cp);
}
