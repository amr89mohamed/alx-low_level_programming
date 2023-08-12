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
printf("size of char: %lu \n",(unsigned long)sizeof (i));
printf("size of int: %lu \n",(unsigned long)sizeof (b));
printf("size of long int: %lu \n",(unsigned long)sizeof (c));
printf("size of long long int: %lu \n",(unsigned long)sizeof (m));
printf("size of float: %lu \n",(unsigned long)sizeof (k));
return (0);  
}
