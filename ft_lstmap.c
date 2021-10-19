/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:21:39 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/19 15:40:02 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

	if (!lst || !f || !del)
		return (NULL);
	ret = ft_lstnew((f(lst->content)));
	if (!ret)
		return (NULL);
	if (lst->next)
	{
		ret->next = ft_lstmap(lst->next, f, del);
		if (!ret->next)
		{
			del(ret);
			return (NULL);
		}
	}
	return (ret);
}

/*
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


void freeList(t_list *head) {if (head) freeList(head->next); free(head);}
void * addOne(void * p)
{
	void * r = malloc(sizeof(int));
	*(int*)r = *(int*)p + 1;
	return (r);
}

int main(void)
{
	int tab[] = {0, 1, 2, 3};
	t_list * l =  ft_lstnew(tab);
	for (int i = 1; i < 4; ++i)
		ft_lstadd_back(&l, ft_lstnew(tab + i));
	t_list * m = ft_lstmap(l, addOne, free);
	t_list * tmp = l;
	for (int i = 0; i < 4; ++i)
	{
		printf("ft_[%d]vs[%d]\n", *(int*)tmp->content, i);
		tmp = tmp->next;
	}
	tmp = m;
	printf("listret:%p\n", tmp);
	for (int i = 0; i < 4; ++i)
	{
		printf("ft_[%d]vs[%d]\n", *(int*)tmp->content, i + 1);
		tmp = tmp->next;
	}
	freeList(l); ft_lstclear(&m, free);
	write(1, "\n", 1);
	return (0);
}
*/