#include "main.h"
#include <string.h>

/**
*print_rev -> printing a string in reverse
*@s: the string to be printed in rev
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
