/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:08:15 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/12 17:20:28 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
/**
 * @brief Counts the number of elements in a list.
 * 
 * @param lst The beginning of the list.
 * @return int Length of the list.
 */
int	ft_lstsize(t_list *lst)
{
	int	len;

	if (!lst)
		return (0);
	len = 0;
	while (lst)
	{
		lst = lst->next;
		len++;
	}
	return (len);
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
	for (int i = 0; i < 10; i++)
		ft_lstadd_front(&list, ft_lstnew(&c));
	printf("len: |%d|\n", ft_lstsize(list));
	return (0);
}
*/