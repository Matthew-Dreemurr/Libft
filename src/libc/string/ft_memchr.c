/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 19:08:18 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/20 12:45:17 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

	ptr = (unsigned char *)s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
