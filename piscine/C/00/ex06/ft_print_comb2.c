/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral- <gamaral-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:02:50 by gamaral-          #+#    #+#             */
/*   Updated: 2023/03/08 20:28:20 by gamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	contador1;
	int	contador2;

	contador1 = 0;
	contador2 = 0;
	while (contador1 <= 98)
	{
		contador2 = contador1 + 1;
		while (contador2 <= 99)
		{
			ft_putchar(contador1 / 10 + '0');
			ft_putchar(contador1 % 10 + '0');
			write(1, " ", 1);
			ft_putchar(contador2 / 10 + '0');
			ft_putchar(contador2 % 10 + '0');
			if (!(contador1 / 10 == 9 && contador1 % 10 == 8))
			{
				write(1, ", ", 2);
			}
			contador2++;
		}
		contador1++;
	}
}
