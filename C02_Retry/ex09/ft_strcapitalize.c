/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmayela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:44:33 by nmayela           #+#    #+#             */
/*   Updated: 2025/07/13 14:07:01 by nmayela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	verif;

	i = 0;
	verif = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (verif == 0 && str[i] >= 'a' && str[i] <= 'z' )
		{
			str[i] -= 32;
			verif = 1;
		}
		else if (verif == 0 && str[i] >= '0' && str[i] <= '9' )
		{
			verif = 1;
		}
		else if (!(str[i] >= 'a' && str[i] <= 'z')
			&& (!(str[i] >= '0' && str[i] <= '9')))
			verif = 0;
		i++;
	}
	return (str);
}
/*int main(void)
{
	char text[]  = "hi, how are you? 42words forty-two; fifty+and+one";
	printf("%s",ft_strcapitalize(text));
}*/
