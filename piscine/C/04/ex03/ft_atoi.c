/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral- <gamaral-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:48:28 by gamaral-          #+#    #+#             */
/*   Updated: 2023/03/23 00:13:47 by gamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sinal;
	int	n;

	n = 0;
	i = 0;
	sinal = 1;
	if (!((str[i] >= 9 && str[i <= 13]) || str[i] == 32))
		return (n);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (!(str[i] >= 48 && str[i] <= 57))
	{
		if (str[i] == '-')
			sinal = sinal * (-1);
		i++;
	}
	while ((str[i] >= 48 && str[i] <= 57))
	{
		n = n * 10;
		n = n + (str[i] - '0');
		i++;
	}
	return (sinal * n);
}
