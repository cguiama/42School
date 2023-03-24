/*
Assignment name  : ft_putstr
Expected files   : ft_putstr.c
Allowed functions: write
--------------------------------------------------------------------------------
Write a function that displays a string on the standard output.
The pointer passed to the function contains the address of the string's first
character.
Your function must be declared as follows:
void	ft_putstr(char *str);
*/
#include <stdio.h>
#include <unistd.h>

char	ft_putstr(char *c)
{
	int i = 0;

	while (c[i])
	{
		write(1, &c[i], 1);
		i++;
	}
	return (*c);
}
