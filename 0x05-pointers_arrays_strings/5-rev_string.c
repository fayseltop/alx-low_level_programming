#include <string.h>
/**
*rev_string -> this function used to reverse and asks himself.
*@s: this is string.
*/
void rev_string(char *s)
{
int i = 0, a = 0, Aux;


	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > a)
	{
		Aux = s[i];
		s[i--] = s[a];
		s[a++] = Aux;
	}
}
