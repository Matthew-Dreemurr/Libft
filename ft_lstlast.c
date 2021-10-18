/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:23:14 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/18 15:15:55 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the last element of the list.
 * 
 * @param lst The beginning of the list.
 * @return t_list* Last element of the list.
 */
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (!lst->next)
			break ;
		lst = lst->next;
	}
	return (lst);
}

/*
#include <stdlib.h>
#include <stdio.h>

int	main()
{
	t_list	*list;
	int		c = 12;
	setbuf(stdout, NULL);

	list = ft_lstnew(&c);
	for (int i = 10; i > 0; i--)
	{
		printf("list No:%2d |%p|\n", i, list);
		ft_lstadd_front(&list, ft_lstnew(&c));
	}
	printf("last list: |%p|\n", ft_lstlast(list));
	return (0);
}
*/