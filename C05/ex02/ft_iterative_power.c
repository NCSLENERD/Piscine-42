/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmayela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 18:24:20 by nmayela           #+#    #+#             */
/*   Updated: 2025/07/14 18:41:32 by nmayela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	stock;

	stock = nb;
	power--;
	if (power < 0)
		return (0);
	if (power == 1)
		return (1);
	while (power > 0)
	{
		nb = nb * stock;
		power--;
	}
	return (nb);
}
/*int main (void)
{
	printf("%d",ft_iterative_power(5,5));
}*/
