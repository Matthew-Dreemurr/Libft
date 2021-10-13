/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 19:08:18 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/13 14:40:05 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
*  SYNOPSIS
*    #include <string.h>
*
*    void *
*    memchr(const void *s, int c, size_t n);
*
*  DESCRIPTION
*    The memchr() function locates the first occurrence of c (converted to an
*    unsigned char) in string s.
*
*  RETURN VALUES
*    The memchr() function returns a pointer to the byte located, or NULL if
*    no such byte exists within n bytes.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char*)s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	char	*ret_or;
	char	*ret_ft;

	if (ac != 4)
	{
		printf("ERROR!\n");
		return (0);
	}
	ret_or = (char *)memchr((const void *)av[1], (int)av[2][0], atoi(av[3]));
	ret_ft = (char *)ft_memchr((const void *)av[1], (int)av[2][0], atoi(av[3]));
	printf("or_ [%p]  |%s|\n", ret_or, ret_or);
	printf("ft_ [%p]  |%s|\n", ret_ft, ret_ft);
}
*/