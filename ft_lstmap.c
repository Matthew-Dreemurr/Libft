/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:21:39 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/20 12:45:16 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief Iterates the list ’lst’ and applies the function ’f’ to the content
 *        of each element.  Creates a newlist resulting of the successive
 *        applications ofthe function ’f’.  The ’del’ function is used todelete
 *        the content of an element if needed.
 * 
 * @param lst The adress of a pointer to an element.
 * @param f   The adress of the function used to iterate onthe list.
 * @param del The adress of the function used to delete thecontent of an element
 *            if needed.
 * @return t_list* The new list.  NULL if the allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;

	if (!lst || !f)
		return (NULL);
	ret = ft_lstnew((f(lst->content)));
	if (!ret)
		return (NULL);
	if (lst->next)
	{
		ret->next = ft_lstmap(lst->next, f, del);
		if (!ret->next)
		{
			del(ret->content);
			free(ret);
			return (NULL);
		}
	}
	return (ret);
}
