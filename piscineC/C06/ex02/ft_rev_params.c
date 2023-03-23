/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral- <gamaral-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 01:54:33 by gamaral-          #+#    #+#             */
/*   Updated: 2023/03/23 02:04:18 by gamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;
	int	x;

	i = (argc - 1);
	if (argc > 0)
	{
		while (i > 0)
		{
			x = 0;
			while (argv[i][x] != '\0')
			{
				write(1, &argv[i][x], 1);
				x++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
