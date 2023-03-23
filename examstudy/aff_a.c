/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral- <gamaral-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:30:31 by gamaral-          #+#    #+#             */
/*   Updated: 2023/03/23 16:37:31 by gamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 2)
	{
		write(1, "a\n", 2);
		return (0);
	}
	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] != 'a')
			i++;
		else
		{
			write(1, "a", 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

/*
Write a program that takes a string, and displays the first 'a' character it encounters in it, followed by a newline. If there are no 'a' characters in the string, the program just writes a newline. If the number of parameters is not 1, the program displays 'a' followed by a newline.
*/
