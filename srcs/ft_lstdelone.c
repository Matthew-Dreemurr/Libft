/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:40:01 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/12 17:42:02 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
/**
 * @brief Takes as a parameter an element and frees thememory of the element’s
 *        content using the function ’del’given as a parameter and free the
 *        element.
 *        The memory of ’next’ must not be freed.
 * 
 * @param lst The element to free.
 * @param del The address of the function used to delete thecontent.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{

}