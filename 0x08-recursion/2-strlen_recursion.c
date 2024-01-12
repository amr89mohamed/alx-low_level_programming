#include "main.h"
/*
 * this funcation will
 * will return the number of
 * the letters
 * on the string
 */int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
