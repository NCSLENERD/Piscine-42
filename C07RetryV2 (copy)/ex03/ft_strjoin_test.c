/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmayela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 17:06:00 by nmayela           #+#    #+#             */
/*   Updated: 2025/07/24 18:09:00 by nmayela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str && str[i])
		i++;
	return (i);
}

int	ft_strlen_total(char **strs,int size, char *sep)
{
	int	i;
	int	j;
	int	len_total;

	j = 0;
	i = 0;
	len_total = 0;
	while(i < size)
	{
		len_total += ft_strlen(strs[i]);
		i++;
	}
	i = 0;
	while(i < size - 1)
	{
		len_total += ft_strlen(sep);
		i++;
	}
	return (len_total);
}

void	ft_strcat(char *dest, char *src, char *sep ,int var)
{
	int	i;
	int	len;
	
	len = 0;
	while (dest[len] != '\0')
		len++;
	i = 0;
	while(src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	len = len + i;
	i = 0;
	if(var == 0)
	{
		while (sep[i] != '\0')
		{
			dest[len + i] = sep[i];
			i++;
		}
	}
	dest[len + i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int	len_result;
	int	i;
	
	result = NULL;
	if (size == 0)
	{
		result = malloc(1);
		result[0] = '\0';
		return (result);
	}
	len_result = ft_strlen_total(strs, size, sep);
	result = malloc((len_result + 1) * sizeof(char));
	result[0] = '\0';
	i = 0;
	while(i < size)
	{
		if(strs[i] && strs[i+1])
		{
			ft_strcat(result, strs[i], sep, 0);
		}
		else if (strs[i])
			ft_strcat(result, strs[i], sep, 1);
		i++;
	}
	return (result);
}

int main(void)
{
	char *tab[4];
	char *result;
	char *sep = "/";
	
	tab[0] = 0;
	tab[1] = 0;
	tab[2] = "test";
	tab[3] = 0;

	result = NULL;
	result = ft_strjoin(4,tab,sep);
	printf("%s",result);
}
