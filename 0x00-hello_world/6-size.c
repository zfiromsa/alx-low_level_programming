#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
 int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
    printf("Size of a long int: %d byte(s)\n",sizeof(l));
	printf("size of a long long int: %d byte(s)\n",sizeof(ll));
	printf("Size of a float: %d byte(s)\n",sizeof(f));
	fprintf( stderr, "my %s has %d chars\n", "string format", 30);
	return (0);
}
