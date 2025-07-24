/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmayela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 17:06:00 by nmayela           #+#    #+#             */
/*   Updated: 2025/07/24 19:33:26 by nmayela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

int	ft_strlen_total(char **strs, int size, char *sep)
{
	int	i;
	int	j;
	int	len_total;

	j = 0;
	i = 0;
	len_total = 0;
	if (!strs)
		return (0);
	while (i < size)
	{
		len_total += ft_strlen(strs[i]);
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		len_total += ft_strlen(sep);
		i++;
	}
	return (len_total);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	len = 0;
	while (dest[len] != '\0')
		len++;
	i = 0;
	while (src && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	len = len + i;
	i = 0;
	dest[len + i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		len_result;
	int		i;

	len_result = ft_strlen_total(strs, size, sep);
	result = malloc((len_result + 1) * sizeof(char));
	result[0] = '\0';
	if (size == 0 || !strs)
		return (result);
	i = -1;
	len_result = 1;
	while (++i < size)
	{
		if (strs[i])
		{
			if (!len_result)
				ft_strcat(result, sep);
			ft_strcat(result, strs[i]);
			len_result = 0;
		}
	}
	return (result);
}
/*int main(void)
{
	char *tab[4];
	char *result;
	char *sep = "/";
	
	tab[0] = 0;
	tab[1] = "test";
	tab[2] = 0;
	tab[3] = "test";

	result = ft_strjoin(4,tab,sep);
	printf("TEST1 %s\n",result); 
	result = ft_strjoin(0, tab, sep);
	printf("TEST2 %s\n", result);
	result = ft_strjoin(4, NULL, sep);
	printf("TEST3 %s\n", result);
	result = ft_strjoin(4, tab, NULL);
	printf("TEST4 %s\n", result);
	tab[0] = "\0";
	result = ft_strjoin(4, tab, sep);
	printf("TEST5 %s\n", result);
	tab[1] = "\0";
	result = ft_strjoin(1, tab, sep);
	printf("TEST6 %s\n", result);
	tab[0] = 0;
	result = ft_strjoin(1, tab, sep);
	printf("TEST7 %s\n", result);
	result = ft_strjoin(4, tab, sep);
	printf("TEST8 %s\n", result);
}*/
