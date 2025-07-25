/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_element.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmayela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:29:37 by nmayela           #+#    #+#             */
/*   Updated: 2025/07/24 20:44:08 by nmayela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_create_element(int data)
{
	t_list *new = malloc(sizeof(t_list));
	new->data = data;
	new->next = NULL;
	return (new);
}

void	append_list(t_list **begin_list,t_list *new)
{
	t_list *tmp;
	
	if(*begin_list == NULL)
	{
		(*begin_list) = new;
	}
	tmp = *begin_list;
	while(tmp)
	{	
		tmp = tmp->next;
	}
	tmp->next = new;
}

int main(void)
{
	void *ptr;
	t_list *test1 ;
	t_list *test2;
	/*int	data;
	data = 10;*/
	test1 = ft_create_element(10);
	test2 = ft_create_element(5);
	ptr = &test1;
	//data = 5;
	append_list(ptr,test2);
	
	while(test1)
	{
		printf("%d",test1->data);
		test1  = test1->next;
	}
}
