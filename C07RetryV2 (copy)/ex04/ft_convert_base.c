/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmayela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:36:56 by nmayela           #+#    #+#             */
/*   Updated: 2025/07/22 21:50:58 by nmayela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str);
int	ft_atoi_base(char *str, char *base);
int	verif_base(char *base);

void	ft_putnbr(long int nb, char *base, char *res)
{
	int	len;

	len = ft_strlen(base);
	if (nb < 0)
	{
		nb = nb * -1;
		res[0] = '-';
	}
	if (nb < len)
	{
		res[ft_strlen(res)] = base[nb];
	}
	else
	{
		ft_putnbr(nb / len, base, res);
		ft_putnbr(nb % len, base, res);
	}
}

void	ft_putnbr_base(int nbr, char *base, char *res)
{
	long int	stock;

	stock = nbr;
	if (!(verif_base(base)))
		return ;
	ft_putnbr(stock, base, res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		app_atoi;
	char	*res;

	if (!verif_base(base_from) || !verif_base(base_to))
		return (NULL);
	res = NULL;
	res = malloc(34 * sizeof(char));
	if (res == NULL)
		return (NULL);
	app_atoi = ft_atoi_base(nbr, base_from);
	ft_putnbr_base(app_atoi, base_to, res);
	res[ft_strlen(res)] = '\0';
	return (res);
}
/*int main (void)
{
	char *res;

	res = ft_convert_base("20","0123456789","0123456789ABCDEF");
	printf("%s",res);
}*/
