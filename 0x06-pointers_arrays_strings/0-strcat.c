#include "main.h"
#include <stdio.h>
#include <string.h>
/*
 * this funcation concatinat two strings
 */ char *_strcat(char *dest, char *src)
{
size_t dest_len = strlen(dest);
size_t i;
for (i = 0; i < dest_len && src[i] != '\0'; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';
return (dest);
}
