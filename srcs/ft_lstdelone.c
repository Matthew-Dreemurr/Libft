/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:40:01 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/13 09:43:00 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdlib.h>

/**
 * @brief Takes as a parameter an element and frees thememory of the element’s
 *        content using the function ’del’ given as a parameter and free the
 *        element.
 *        The memory of ’next’ must not be freed.
 * 
 * @param lst The element to free.
 * @param del The address of the function used to delete thecontent.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!del || !lst)
		return ;
	del(lst->content);
	free(lst->content);
}

#include <string.h>
#include <stdio.h>

int	main()
{
	char **test;

	test = (char **)malloc(sizeof(char *) * 5);
	bzero(test, sizeof(char *) * 5);
	for (int i = 0; i < 5; i++)
	{
		test[i] = (char *)malloc(32);
		for (size_t y = 0; y < 32; y++)
		{
			test[i][y] = y+'a';
		}
		test[i][31] = 0;
		printf("test[%d]|%s|\n", i, test[i]);
	}
	return 0;
}