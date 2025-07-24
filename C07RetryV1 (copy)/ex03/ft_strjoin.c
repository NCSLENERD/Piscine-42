/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmayela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 18:00:03 by nmayela           #+#    #+#             */
/*   Updated: 2025/07/22 17:44:47 by nmayela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str, char **strs, int size, int var)
{
	int	i;
	int	count;

	i = 0;
	if (var == 1)
	{
		count = 0;
		while (i < size)
		{
			if (strs[i] != NULL)
				count++;
			i++;
		}
		return (count);
	}
	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

char	**ft_rm_null(char **strs, int size, int len_size)
{
	int		i;
	int		j;
	int		a;
	char	**res;

	res = malloc(len_size * sizeof(char *));
	i = 0;
	a = 0;
	while (i < size)
	{
		if (strs[i])
		{
			j = ft_strlen(strs[i], strs, size, 0);
			res[a] = malloc(j * sizeof(char));
			j = 0;
			while (strs[i][j])
			{
				res[a][j] = strs[i][j];
				j++;
			}
			a++;
		}
		i++;
	}
	return (res);
}

int	ft_strlen_total(char **strs, int size, int len_sep)
{
	int	i;
	int	j;
	int	len_total;

	i = 0;
	j = 0;
	len_total = 0;
	while (i < size)
	{
		if (strs[j])
		{
			len_total = len_total + ft_strlen(strs[j], strs, size, 0);
			i++;
		}
		j++;
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
	char	**strsv2;
	int		len_sep;
	int		len_result;
	int		len_size;

	if (size <= 0 || strs == NULL)
	{
		result = malloc(1);
		if (result == NULL)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	len_size = ft_strlen(strs[0], strs, size, 1);
	len_sep = ft_strlen(sep, strs, size, 0);
	strsv2 = ft_rm_null(strs, size, len_size);
	len_result = ft_strlen_total(strsv2, len_size, len_sep);
	result = malloc((len_result + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	ft_strcat_ult(strsv2, sep, result, len_size);
	return (result);
}
/*int main(void)
{
	char	*tab[6];
	char	separateur[] = ":";
	char	*result;

	//printf("%d\n",ft_strlen_total(tab,6,1));
	result = ft_strjoin(6,tab,separateur);
	printf("%s",result);

}*/
