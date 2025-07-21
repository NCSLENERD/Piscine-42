/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmayela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 14:26:50 by nmayela           #+#    #+#             */
/*   Updated: 2025/07/16 15:05:49 by nmayela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		len;
	int		i;

	len = ft_strlen(src) + 1;
	i = 0;
	copy = (char *)malloc (len * sizeof (char));
	if (copy == NULL)
		return (0);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	return (src);
}
/*int main (void)
{
	char text[] = "bonjour";

	printf("%s",ft_strdup(text));
	printf("%s",strdup(text));
}*/
