/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmayela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 14:26:50 by nmayela           #+#    #+#             */
/*   Updated: 2025/07/22 20:03:57 by nmayela          ###   ########.fr       */
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

	len = ft_strlen(src);
	i = 0;
	copy = (char *)malloc ((len + 1) * sizeof (char));
	if (copy == NULL)
		return (0);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (src);
}
/*int main (void)
{
	char text[] = "bonjour";

	printf("%s",ft_strdup(text));
	printf("%s",strdup(text));
}*/
