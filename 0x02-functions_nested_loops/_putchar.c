#include <stdio.h>
#include <unistd.h>
#include "main.h"
int _putchar(char i)
{

  write(1, &i, 1);

  return (i);
}
