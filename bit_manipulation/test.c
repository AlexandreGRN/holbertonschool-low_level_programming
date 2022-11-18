#include <limits.h>
#include <stdio.h>
int main(void)
{
	unsigned long int i;

	i = ~(((ULONG_MAX)) ^ 0);

	printf("%lu\n", i);

	return (1);
}
