/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmayela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:29:52 by nmayela           #+#    #+#             */
/*   Updated: 2025/07/13 14:43:27 by nmayela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	verif_base(char *base)
{
	int	i;
	int	j;
	int	stock;

	j = 0;
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (stock == base[j])
				return (0);
			j++;
			stock = base[i];
		}
		i++;
		stock = base[i];
	}
	if (i <= 1)
		return (0);
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putnbr(long int nb, char *base)
{
	int	len;

	len = ft_strlen(base);
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	if (nb < len)
	{
		write(1, &base[nb], 1);
	}
	else
	{
		ft_putnbr(nb / len, base);
		ft_putnbr(nb % len, base);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	stock;

	stock = nbr;
	if (!(verif_base(base)))
		return ;
	ft_putnbr(stock, base);
}
/*int main(void)
{
	int	nb = -2147483648;
	char base[] = "01";
	ft_putnbr_base(nb,base);
}*/
