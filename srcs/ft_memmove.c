/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:52:32 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/05 17:14:51 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

#include "../include/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_ptr;
	const unsigned char	*src_prt;

	dst_ptr = (unsigned char *)dst;
	src_prt = (const unsigned char *)src;
	if (dst < src)
	{
		while (len > 0)
		{
			len--;
			dst_ptr[len] = src_prt[len];
		}
	}
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
	int		size = 3;

	ret_or = memmove(dst_or, str_or, size);
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
	ret_ft = ft_memmove(dst_ft, str_ft, size);
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

		free(str_or);
		free(dst_or);
		free(str_ft);
		free(dst_ft);
	return (0);
}
*/