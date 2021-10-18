/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:30:30 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/18 15:15:55 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds the element ’new’ at the end of the list.
 * 
 * @param lst Adds the element ’new’ at the end of the list.
 * @param new The address of a pointer to the element to beadded to the list.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*end;

	if (!lst || !new)
		return ;
	end = ft_lstlast(*lst);
	if (!end)
		*lst = new;
	else
		end->next = new;
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
	ft_lstadd_back(&list, ft_lstnew(&int_22));
	ft_lstadd_back(&list, ft_lstnew(&int_33));
	for (;list;)
	{
		printf("[%d]\n", *(int *)list->content);
		list = list->next;
	}
	return (0);
}
*/
