/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:01:48 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/05 16:39:40 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
SYNOPSIS
*    #include <string.h>
*
*    size_t
*    strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
*
*    size_t
*    strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
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

size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t		dst_len;
	const char	*start_dst;
	const char	*start_src;

	start_dst = dst;
	start_src = src;

	while (dstsize && *dst)
	{
		dst++;
		dstsize--;
	}
	dst_len = (size_t)(dst - start_dst);
	if (!dstsize)
		return (dst_len + ft_strlen(src));
	dstsize--;
	while (*src)
	{
		if (dstsize)
		{
			*dst = *src;
			dst++;
			dstsize--;
		}
		src++;
	}
	*dst = '\0';
	return ((size_t)(dst_len + (src - start_src)));
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DST "12345#############################"
#define SRC "abcde"
#define SZE 11

#define SKIP_OR 5  //number char to skip
#define TO_SET  30 //number of `\0` to place after `SKIP_OR`

int	main()
{
	size_t	size = SZE;
	
	size_t	ret_or = 0;
	char	*str_or = strdup(SRC);
	char	*dst_or = strdup(DST);
	bzero((dst_or + SKIP_OR), TO_SET); // to remove `#`
	
	size_t	ret_ft = 0;
	char	*str_ft = strdup(SRC);
	char	*dst_ft = strdup(DST);
	bzero((dst_ft + SKIP_OR), TO_SET);

	ret_or = strlcat(dst_or, str_or, size);
	ret_ft = ft_strlcat(dst_ft, str_ft, size);

	printf(
		"== OR ==\n"
		"ret_or                  |%lu|\n"
		"str_or [%p] |%s|\n"
		"dst_or [%p] |%s|\n"
		,
		ret_or,
		str_or, str_or,
		dst_or, dst_or
		);

	printf(
		"== FT ==\n"
		"ret_ft                  |%lu|\n"
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