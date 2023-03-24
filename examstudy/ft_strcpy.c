/*
Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions: 
--------------------------------------------------------------------------------
Reproduce the behavior of the function strcpy (man strcpy).
Your function must be declared as follows:
char    *ft_strcpy(char *s1, char *s2);
*/

#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
	int i = 0;

	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	return(s1);
}


int		main(void)
{
	char source[] = "Source string.";
	char destin[] = "Destination string.";
	char *dest;

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", source, destin);

    dest = ft_strcpy(destin, source);

	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", source, dest);
	return (0);
}