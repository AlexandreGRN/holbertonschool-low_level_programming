#include "main.h"
/**
 *_islower - checks for lowercase character
 *@c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c);
{
	/*Test of c is lower*/
	if ('c' < 'z' && 'c' > 'a')
	{
		return (1);
	}
	else
		return (0);
}
