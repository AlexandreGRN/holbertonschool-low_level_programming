#include "main.h"
#include <stdio.h>


/**
 *_isupper - Check for uppercase chara
 * @c : character we will test
 * Return 1 if uppercase, 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
