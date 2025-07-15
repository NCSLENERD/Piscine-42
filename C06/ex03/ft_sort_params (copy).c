/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmayela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:01:39 by nmayela           #+#    #+#             */
/*   Updated: 2025/07/15 19:05:32 by nmayela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (!(s1[i] == s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int	ft_strcmplen(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	while (str1[i])
	{
		i++;
	}
	j = 0;
	while (str2[j])
	{
		j++;
	}
	if (i >= j)
		return (1);
	return (0);
}

void	sortlen(char *tab[], int size)
{
	char	*min;
	int		i;
	int		j;

	i = 1;
	min = 0;
	while (i < size)
	{
		min = tab[i];
		j = i;
		while (j < size)
		{
			if (ft_strcmplen(min, tab[j]))
			{
				min = tab[j];
				tab[j] = tab[i];
				tab[i] = min;
			}
			j++;
		}
		tab[i] = min;
		i++;
	}
}

void	sort(char *tab[], int size)
{
	char	*min;
	int		i;
	int		j;

	i = 1;
	min = 0 ;
	while (i < size)
	{
		min = tab[i];
		j = i;
		while (j < size)
		{
			if ((ft_strcmp(min, tab[j]) >= 0) && (ft_strcmplen(min, tab[j])))
			{
				min = tab[j];
				tab[j] = tab[i];
				tab[i] = min;
			}
			j++;
		}
		tab[i] = min;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	sortlen(argv, argc);
	sort(argv, argc);
	while (i < argc)
	{
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
	return (0);
}
