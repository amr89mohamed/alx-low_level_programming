#include "function_pointers.h"
/*
 * this funcation takes @name as the first arg
 * @pointer f to a a pointer to char
 * and return nothing
*/void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
(f)(name);
}
}
