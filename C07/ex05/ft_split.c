/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmayela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:00:38 by nmayela           #+#    #+#             */
/*   Updated: 2025/07/19 17:44:55 by nmayela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_charset(char str, char *charset)
{
	int	i;

	i = 0;
	while(charset[i])
	{
		if (str == charset[i])
			return (1);
		i++;
	}
	return (0);
}


char	*ft_splitting(char *str, int count)
{
	int	i;
	char	*res;

	i = 0;
	res = malloc(count * sizeof(char));
	if (res == NULL)
		return NULL;
	while (i < count)
	{
		res[i] = *str;
		str++;
		i++;
	}
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	int	i;
	int	count;
	int	word;
	int	len;
	char	**result;

	i  = 0;
	word = 0;
	count = 0;
	len = ft_strlen(str);
	result = malloc(len * sizeof(char* ));
	while (i <= len)
	{
		if (is_charset(str[i], charset) || str[i] == '\0')
		{
			result[word] = ft_splitting(&str[i-count], count);
			word++;
			count = 0;
			while(is_charset(str[i], charset))
				i++;
		}
		i++;
		count++;
	}
	return (result);	
}

int main(void)
{
	char charset[] = "   ";
	char str[] = "bonjour/ /a cestmoi yo mdr salut my g ";
	char **test;
	int	i;

	test = ft_split(str,charset);
	i = 0;
	while (test[i])
	{
		printf("%s\n",test[i]);
		i++;
	}
	//printf("%s");

}
