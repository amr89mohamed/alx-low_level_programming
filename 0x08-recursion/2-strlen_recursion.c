#include "main.h"
#include <string.h>
/*
 * this the funcation discraption
 */int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
s++;
return (1 + _strlen_recursion(s));
}
}
