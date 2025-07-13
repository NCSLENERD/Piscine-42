/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmayela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:12:33 by nmayela           #+#    #+#             */
/*   Updated: 2025/07/13 13:24:12 by nmayela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<bsd/string.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_src;

	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && (j + i) < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	if (size < i)
		i = size;
	return (i + len_src);
}
/*int main(void)
{
	char text1[]  = "bonjour";
	char text2[10] = "salut ";
	char text3[]  = "bonjour";
        char text4[10] = "salut ";

	printf("%u\n",ft_strlen(text1));
	printf("Usurpateur: %u\n",ft_strlcat(text2,text1,10));
	printf("Officiel: %zu\n",strlcat(text4,text3,10));
	printf("Officiel: %s\n",text4);
	printf("Usurpateur: %s\n",text2);
}*/
