/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_final.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmayela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:00:38 by nmayela           #+#    #+#             */
/*   Updated: 2025/07/24 16:27:26 by nmayela          ###   ########.fr       */
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
	while (charset[i])
	{
		if (str == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_splitting(char *str, int count)
{
	int		i;
	char	*res;

	i = 0;
	res = malloc((count + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (i < count)
	{
		res[i] = str[i];
		i++;
	}
	res[count] = '\0';
	return (res);
}

int	ft_skip_sep(char *str, char *charset, int i)
{
	while (is_charset(str[i], charset))
		i++;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		count;
	int		word;
	int		len;
	char	**result;

	i = 0;
	word = 0;
	count = 0;
	len = ft_strlen(str);
	result = malloc((len + 1) * sizeof(char *));
	i = ft_skip_sep(str, charset, i);
	while (i <= len)
	{
		if ((is_charset(str[i], charset) || str[i] == '\0') && count != 0)
		{
			result[word++] = ft_splitting(&str[i - count], count);
			count = 0;
			i = ft_skip_sep(str, charset, i);
		}
		i++;
		count++;
	}
	result[word] = NULL;
	return (result);
}
int main(void)
  {
  char charset[] = "a/";
  char str[] = "///salut/bonjour/a//////////plus//////";
  char **test;
  int	j;

  test = ft_split(str,charset);
  j = 0;
  while (test[j])
  {
  printf("%s\n",test[j]);
  j++;
  }
  printf("%s\n",test[j]);
  }
