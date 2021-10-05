/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:06:29 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/04 15:09:11 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
*  LIBRARY
*       Standard C Library (libc, -lc)
*  
*  SYNOPSIS
*       #include <string.h>
*  
*       void *
*       memcpy(void *restrict dst, const void *restrict src, size_t n);
*  
*  DESCRIPTION
*       The memcpy() function copies n bytes from memory area src to memory
*       area dst.  If dst and src overlap, behavior is undefined.  Applications
*       in which dst and src might overlap should use memmove(3) instead.
*  
*  RETURN VALUES
*       The memcpy() function returns the original value of dst.
*/

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char		*dst_ptr;
	const unsigned char	*src_ptr;

	dst_ptr = (unsigned char *)dst;
	src_ptr = (unsigned const char *)src;
	while (n > 0)
	{
		n--;
		dst_ptr[n] = src_ptr[n];
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TXT "1234test00"

int	main()
{
	char	*ret_or = NULL;
	char	*str_or = strdup(TXT);
	char	*dst_or = (char *)malloc(strlen(str_or) + 1);
	char	*ret_ft = NULL;
	char	*str_ft = strdup(TXT);
	char	*dst_ft = (char *)malloc(strlen(str_ft) + 1);
	int		size = 4;

	ret_or = memcpy(dst_or, str_or, size);
	printf(
		"== OR ==\n"
		"str_or [%p] |%s|\n"
		"ret_or [%p] |%s|\n"
		"dst_or [%p] |%s|\n"
		,
		str_or, str_or,
		ret_or, ret_or,
		dst_or, dst_or
		);
		free(str_or);
		free(dst_or);

	ret_ft = ft_memcpy(dst_ft, str_ft, size);
	printf(
		"== FT ==\n"
		"str_ft [%p] |%s|\n"
		"ret_ft [%p] |%s|\n"
		"dst_ft [%p] |%s|\n"
		,
		str_ft, str_ft,
		ret_ft, ret_ft,
		dst_ft, dst_ft
		);
		free(str_ft);
		free(dst_ft);
	return (0);
}
*/