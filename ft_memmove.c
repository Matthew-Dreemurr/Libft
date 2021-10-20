/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:52:32 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/20 12:45:19 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*  LIBRARY
*       Standard C Library (libc, -lc)
*
*  SYNOPSIS
*       #include <string.h>
*
*       void *
*       memmove(void *dst, const void *src, size_t len);
*
*  DESCRIPTION
*       The memmove() function copies len bytes from string src to string dst.
*       The two strings may overlap; the copy is always done in a
*       non-destructive manner.
*
*  RETURN VALUES
*       The memmove() function returns the original value of dst.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_ptr;
	const unsigned char	*src_prt;

	if (!dst && !src)
		return (NULL);
	dst_ptr = (unsigned char *)dst;
	src_prt = (const unsigned char *)src;
	if (dst > src)
		while (len-- > 0)
			dst_ptr[len] = src_prt[len];
	else
	{
		while (len > 0)
		{
			*dst_ptr = *src_prt;
			dst_ptr++;
			src_prt++;
			len--;
		}
	}
	return (dst);
}
