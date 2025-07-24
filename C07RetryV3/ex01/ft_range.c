/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmayela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 14:38:41 by nmayela           #+#    #+#             */
/*   Updated: 2025/07/23 15:55:09 by nmayela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_int_len(int min, int max)
{
	int	i;

	i = 0;
	while (min < max)
	{
		min++;
		i++;
	}
	return (i);
}

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*tab;

	if (min >= max)
		return (0);
	i = 0;
	len = ft_int_len(min, max);
	tab = malloc(len * sizeof (int));
	if (tab == NULL)
		return (0);
	while (i < len)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
/*int main (void)
{
	int	i;
	int	*test;

	i = 0;
	test = ft_range(20,40);
	while (i < 20)
	{
		printf("%d",test[i]);
		printf(" ");
		i++;
	}
}*/
