/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:12:49 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/20 12:45:14 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds the element ’new’ at the beginning of thelist.
 * 
 * @param alst The address of a pointer to the first link ofa list.
 * @param new  The address of a pointer to the element to beadded to the list.
 */
void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (!alst | !new)
		return ;
	new->next = *alst;
	*alst = new;
}
