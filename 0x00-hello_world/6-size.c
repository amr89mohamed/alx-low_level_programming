#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char i;
int b;
long int c;
long long int m;
float k;
printf("size of a char: %lu \n",(unsigned long)sizeof (i));
printf("size of an int: %lu \n",(unsigned long)sizeof (b));
printf("size of a long int: %lu \n",(unsigned long)sizeof (c));
printf("size of a long long int: %lu \n",(unsigned long)sizeof (m));
printf("size of a float: %lu \n",(unsigned long)sizeof (k));
return (0);  
}
