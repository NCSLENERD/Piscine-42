/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utlimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmayela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:48:53 by nmayela           #+#    #+#             */
/*   Updated: 2025/07/22 20:12:33 by nmayela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_int_len(int min, int max)
{
	int	i;

	i = max - min;
	return (i);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	i = 0;
	len = ft_int_len(min, max);
	*range = malloc(len * sizeof(int));
	if (range == NULL)
		return (0);
	while (i < len)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	if (range == NULL)
		return (-1);
	return (len);
}
/*int main(void)
{
	int	*test;
	int	i;
	int	len;
	int	min;
	int	max;

	min = -30;
	max = 50;
	test = NULL;
	len = ft_ultimate_range(&test,min,max);
	printf("Taille : %d Tableau : ",len);
	i = 0;
	if (test != NULL)
	{
		while (i < len)
		{
			printf("%d ",test[i]);
			i++;
		}
	}
}*/
