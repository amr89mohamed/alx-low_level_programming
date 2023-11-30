#include <stdio.h>
#include "function_pointers.h"
/*
 * this funcation
 * should control
 * the print_name_uppercase
 * and the print_name funcations
 * and it will alwes return the value
 * of the name
 */void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
