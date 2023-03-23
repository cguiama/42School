/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral- <gamaral-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:05:05 by gamaral-          #+#    #+#             */
/*   Updated: 2023/03/10 15:08:30 by gamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	divisao;
	int	modulo;

	divisao = (*a / *b);
	modulo = (*a % *b);
	*a = divisao;
	*b = modulo;
}
