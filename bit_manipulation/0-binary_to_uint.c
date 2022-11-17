#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - binary to unsigned int conversion
 * @b: binary string
 * Return: number uint
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, i = 1, num = 0;

	if (b == NULL)
		return (0);
	while (b[n] != '\0')
	{
		if (b[n] != '0' && b[n] != '1' && b[n] != '\0')
			return (0);
		n++;
	}
	n--;
	for (; n + 1 > 0 ; n--)
	{
		if (b[n] == '1')
			num = num + i;
		i = i * 2;
	}
	return (num);
}
