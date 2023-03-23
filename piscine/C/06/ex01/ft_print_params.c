/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral- <gamaral-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 00:12:27 by gamaral-          #+#    #+#             */
/*   Updated: 2023/03/23 01:52:33 by gamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	x;

	i = 1;
	if (argc > 0)
	{
		while (argv[i])
		{
			x = 0;
			while (argv[i][x] != '\0')
			{
				write(1, &argv[i][x], 1);
				x++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
