/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:21:39 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/13 16:44:55 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

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
	t_list	*ret_start;

	if (!lst || !f || !del)
		return (NULL);
	ret = ft_lstnew(f(lst->content));
	if (!ret)
		return (NULL);
	ret_start = ret;
	while (lst)
	{
		lst = lst->next;
		ret->next = ft_lstnew(f(lst->content));
		if (!ret->next)
		{
			del(ret);
			return (NULL);
		}
		ret = ret->next;
	}
	ret->next = NULL;
	return (ret_start);
}
