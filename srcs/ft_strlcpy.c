/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:16:22 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/06 09:16:12 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
SYNOPSIS
*    #include <string.h>
*
*    size_t
*    strlcpy(char *  dst, const char *  src, size_t dstsize);
*
*    size_t
*    strlcat(char *  dst, const char *  src, size_t dstsize);
*
*  DESCRIPTION
*    The strlcpy() and strlcat() functions copy and concatenate strings with
*    the same input parameters and output result as snprintf(3).  They are
*    designed to be safer, more consistent, and less error prone replacements
*    for the easily misused functions strncpy(3) and strncat(3).
*
*    strlcpy() and strlcat() take the full size of the destination buffer and
*    guarantee NUL-termination if there is room.  Note that room for the NUL
*    should be included in dstsize.
*
*    strlcpy() copies up to dstsize - 1 characters from the string src to dst,
*    NUL-terminating the result if dstsize is not 0.
*
*    strlcat() appends string src to the end of dst.  It will append at most
*    dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
*    dstsize is 0 or the original dst string was longer than dstsize (in prac-
*    tice this should not happen as it means that either dstsize is incorrect
*    or that dst is not a proper string).
*
*    If the src and dst strings overlap, the behavior is undefined.
*
*  RETURN VALUES
*    Besides quibbles over the return type (size_t versus int) and signal han-
*    dler safety (snprintf(3) is not entirely safe on some systems), the fol-
*    lowing two are equivalent:
*
*          n = strlcpy(dst, src, len);
*          n = snprintf(dst, len, "%s", src);
*
*    Like snprintf(3), the strlcpy() and strlcat() functions return the total
*    length of the string they tried to create.  For strlcpy() that means the
*    length of src.  For strlcat() that means the initial length of dst plus
*    the length of src.
*
*    If the return value is >= dstsize, the output string has been truncated.
*    It is the caller's responsibility to handle this.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(src);
	while (*src && dstsize > 1)
	{
		*dst = *src;
		dst++;
		src++;
		dstsize--;
	}
	*dst = '\0';
	return (len);
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TXT "1234test00"

int	main()
{
	size_t	size = 1;
	
	size_t	ret_or = 0;
	char	*str_or = strdup(TXT);
	char	*dst_or = (char *)malloc(strlen(str_or) + 1);
	
	size_t	ret_ft = 0;
	char	*str_ft = strdup(TXT);
	char	*dst_ft = (char *)malloc(strlen(str_ft) + 1);

	ret_or = strlcpy(dst_or, str_or, size);
	ret_ft = ft_strlcpy(dst_ft, str_ft, size);

	printf(
		"== OR ==\n"
		"ret_or|%lu|\n"
		"str_or [%p] |%s|\n"
		"dst_or [%p] |%s|\n"
		,
		ret_or,
		str_or, str_or,
		dst_or, dst_or
		);

	printf(
		"== FT ==\n"
		"ret_ft |%lu|\n"
		"str_ft [%p] |%s|\n"
		"dst_ft [%p] |%s|\n"
		,
		ret_ft,
		str_ft, str_ft,
		dst_ft, dst_ft
		);

		free(str_or);
		free(dst_or);
		free(str_ft);
		free(dst_ft);
	return (0);
}
*/