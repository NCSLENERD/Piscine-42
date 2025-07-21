/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmayela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 18:00:03 by nmayela           #+#    #+#             */
/*   Updated: 2025/07/17 16:16:57 by nmayela          ###   ########.fr       */
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

int	ft_strlen_total(char **strs, int size, int len_sep)
{
	int	i;
	int	len_total;

	i = 0;
	len_total = 0;
	while (i < size)
	{
		len_total = len_total + ft_strlen(strs[i]);
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		len_total += len_sep;
		i++;
	}
	return (len_total);
}

void	ft_strcat_ult(char **str, char *sep, char *dest, int size)
{
	int	i;
	int	j;
	int	x;

	i = -1;
	j = 0;
	x = 0;
	while (++i < size)
	{
		j = 0;
		while (str[i] && str[i][j])
		{
			dest[x] = str[i][j];
			j++;
			x++;
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			dest[x] = sep[j];
			j++;
			x++;
		}
	}
	dest[x] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		len_sep;
	int		len_result;

	if (size <= 0 || strs == NULL)
	{
		result = malloc(1);
		if (result == NULL)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	len_sep = ft_strlen(sep);
	len_result = ft_strlen_total(strs, size, len_sep);
	result = malloc((len_result + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	ft_strcat_ult(strs, sep, result, size);
	return (result);
}
/*int main(void)
{
	char	*tab[3];
	char	separateur[] = "./.";
	char	*result;

	tab[0] = "salut";
	tab[1] = 0;
	tab[2] = "tranquille";

	printf("%d\n",ft_strlen_total(tab,3,3));
	result = ft_strjoin(3,tab,separateur);
	printf("%s",result);

}*/
