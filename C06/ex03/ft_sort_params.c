/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmayela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:01:39 by nmayela           #+#    #+#             */
/*   Updated: 2025/07/15 14:16:42 by nmayela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if(!(s1[i] == s2[i]))
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}
int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	stock;

	i = 0;
	j = 0;
}
