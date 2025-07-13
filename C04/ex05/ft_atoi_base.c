/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmayela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 14:46:34 by nmayela           #+#    #+#             */
/*   Updated: 2025/07/13 16:13:17 by nmayela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <math.h>

int	verif_base(char *base)
{
	int	i;
	int	j;
	int	stock;

	i = 0;
	j = 0;
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

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_rev_str(char *str, unsigned int size)
{
	unsigned int	i;
	char	stock;
	
	size--;
	i = 0;
	while (i <= size / 2)
	{
		stock = str[i];
		str[i] = str[size - i];
		str[size - i] = stock;
		i++;
	}	
}

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	i;
	unsigned int	nb_base;
	unsigned int	len_str;
	unsigned int	j;
	int	nb;
	int	mult;

	//1010 , 0101 = 2**1 + 2**3 , 2**1 + 2**3
	nb = 0;
	mult = 0;
	nb_base = ft_strlen(base);
	len_str = ft_strlen(str);
	ft_rev_str(str,len_str);
	if (!(verif_base(base)))
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] != 0)
		{
			mult = 
			while (j < i)
			{
				mult =* mult;
				j++;
			}
			nb = nb + mult;
		}
		i++;
	}
}
int main(void)
{
	/*char text[] = "bonjour";
	ft_rev_str(text,ft_strlen(text));
	printf("%s",text);*/
}
