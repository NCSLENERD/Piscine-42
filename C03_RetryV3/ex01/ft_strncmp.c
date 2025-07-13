/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmayela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 12:40:03 by nmayela           #+#    #+#             */
/*   Updated: 2025/07/13 16:55:23 by nmayela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i]) && i < n && s1[i])
	{
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}
/*#include<stdio.h>
#include<string.h>
int main(void)
{
	char text1[] = "aaa";
	char text2[] ="aaa10";
	
	printf("%d",ft_strncmp(text1,text2,4));
	printf("%d",strncmp(text1,text2,4));
}*/
