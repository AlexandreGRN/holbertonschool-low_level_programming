#include <stdio.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main() {
	char a;
	int b;
	long int c;
	long long int d ;
	float e;

	printf("Size of a char: %zu byte\(s\)\n", sizeof(a));
	printf("Size of an int: %zu byte\(s\)\n", sizeof(b));
	printf("Size of a long int: %zu byte\(s\)\n", sizeof(c));
	printf("Size of long long int: %zu byte\(s\)\n", sizeof(d));
	printf("Size of float: %zu byt\(e\)\n", sizeof(e));
	
	return 0;
}
