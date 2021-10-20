/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:30:30 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/20 12:45:14 by mahadad          ###   ########.fr       */
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
