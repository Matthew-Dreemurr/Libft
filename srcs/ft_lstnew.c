/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:38:40 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/12 16:43:13 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdlib.h>

/**
 * @brief Allocates (with malloc(3)) and returns a newelement.
 *        The variable ’content’ is initializedwith the value of
 *        the parameter ’content’.  Thevariable ’next’ is initialized to NULL.
 * 
 * @param content The content to create the new element with.
 * @return t_list* The new element.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = malloc(sizeof(t_list));
	if (!ptr)
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}

/*
#include <stdio.h>

int	main()
{
	t_list	**list = malloc(sizeof(t_list *) * 3);
	int		int_ = 11;
	long	long_ = 22;
	char	*str = "test 1 2";

	list[0] = ft_lstnew(&int_);
	list[1] = ft_lstnew(&long_);
	list[2] = ft_lstnew(str);

	printf("uint   :%d\n", *(int *)(list[0]->content));
	printf("ulong  :%ld\n", *(long *)(list[1]->content));
	printf("char*  :%s\n", (char *)(list[2]->content));
	for (int i = 0; i < 3; i++)
		printf("[%p]\n", list[i]->next);
	return (0);
}
*/