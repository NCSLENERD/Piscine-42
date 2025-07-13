/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmayela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:15:54 by nmayela           #+#    #+#             */
/*   Updated: 2025/07/13 12:55:29 by nmayela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>
#include<string.h>
int main(void)
{
	char text1[] = "bonjouryo";
	char text2[] = "bojouryo";

	printf("%d",ft_strcmp(text1,text2));
	printf("\n");
	printf("%d",strcmp(text1,text2));
}*/
