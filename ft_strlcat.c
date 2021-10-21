/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:01:48 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/21 13:45:57 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
*
*  NORMINETTE NOTE
*  Incrementation operators are separated from assignation operators
*  https://github.com/42School/norminette/issues/155#issuecomment-859322078
*/

#include "libft.h"

/**
 * @brief   The strnlen() function attempts to compute the length of s,
 *          but never scans beyond the first maxlen bytes of s.
 *
 * @param str    the string
 * @param maxlen the max len
 * @return size_t The strnlen() function returns either the same result
 *                as strlen() or maxlen, whichever is smaller.
 */
static size_t	fk_strnlen(char *str, size_t maxlen)
{
	size_t	len;

	len = 0;
	while (*str && len < maxlen)
	{
		str++;
		len++;
	}
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = fk_strnlen(dst, size);
	if (len == size)
		return (len + ft_strlen(src));
	return (len += ft_strlcpy(dst + len, src, size - len));
}
