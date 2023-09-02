#include "main.h"
#include <stdio.h>
#include <string.h>
/*
 * this funcation concatinat two strings
 */ char *_strcat(char *dest, char *src)
{
size_t dest_len = strlen(dest);
strcpy(dest + dest_len, src);
return (dest);
}
