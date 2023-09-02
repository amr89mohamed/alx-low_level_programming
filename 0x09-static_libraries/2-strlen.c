#include "main.h"
#include <stdio.h>
#include <string.h>
/*
 *this the main funcation which will
 * count the numbers of the line
 */int _strlen(char *s)
{
int len = 0;
while (s[len] != 0)
{
len++;
}
return (len);
}
