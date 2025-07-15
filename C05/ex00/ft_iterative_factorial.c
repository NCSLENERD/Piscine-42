/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmayela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:45:34 by nmayela           #+#    #+#             */
/*   Updated: 2025/07/14 18:00:36 by nmayela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	stock;

	if (nb < 0)
		return (0);
	if (nb == 0)
	{
		return (1);
	}
	stock = 1;
	while (nb > 0)
	{
		stock = nb * stock;
		nb--;
	}
	return (stock);
}
/*int main(void)
{
	printf("%d",ft_iterative_factorial(13));
}*/
