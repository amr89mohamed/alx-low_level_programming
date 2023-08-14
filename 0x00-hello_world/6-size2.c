#include <stdio.h>

int main()
{
    printf("Size of char: %u byte(s)\n", sizeof(char));
    printf("Size of short int: %u byte(s)\n", sizeof(short int));
    printf("Size of int: %u byte(s)\n", sizeof(int));
    printf("Size of long int: %u byte(s)\n", sizeof(long int));
    printf("Size of long long int: %u byte(s)\n", sizeof(long long int));
    printf("Size of float: %u byte(s)\n", sizeof(float));
    printf("Size of double: %u byte(s)\n", sizeof(double));
    printf("Size of long double: %u byte(s)\n", sizeof(long double));

    return 0;
}
