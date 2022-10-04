#include "main.h"
/**
 *_isalpha - checks for alpha character
 *@c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	/*Test of c is lower*/
	if (c < 'z' && c > 'a')
	{
		return (1);
	}
	else if (c <'Z' && c > 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
