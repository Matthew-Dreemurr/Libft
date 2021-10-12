/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:12:49 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/12 16:55:32 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"


/**
 * @brief Adds the element ’new’ at the beginning of thelist.
 * 
 * @param alst The address of a pointer to the first link ofa list.
 * @param new  The address of a pointer to the element to beadded to the list.
 */
void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (!*alst | !new)
		return ;
	new->next = *alst;
	*alst = new;
}

/*
#include <stdlib.h>
#include <stdio.h>

int	main()
{
	t_list	*list;
	int		int_11 = 11;
	int		int_22 = 22;
	int		int_33 = 33;
	setbuf(stdout, NULL);

	list = ft_lstnew(&int_11);
	ft_lstadd_front(&list, ft_lstnew(&int_22));
	ft_lstadd_front(&list, ft_lstnew(&int_33));
	for (;list;)
	{
		printf("[%d]\n", *(int *)list->content);
		list = list->next;
	}
	return (0);
}
*/