/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:40:11 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/20 12:46:26 by mahadad          ###   ########.fr       */
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
*       size_t
*       strlen(const char *s);
*
*       size_t
*       strnlen(const char *s, size_t maxlen);
*
*  DESCRIPTION
*       The strlen() function computes the length of the string s.  The strnlen()
*       function attempts to compute the length of s, but never scans beyond the
*       first maxlen bytes of s.
*
*  RETURN VALUES
*       The strlen() function returns the number of characters that precede the
*       terminating NUL character.  The strnlen() function returns either the
*       same result as strlen() or maxlen, whichever is smaller.
*/

size_t	ft_strlen(const char *s)
{
	char	*start;

	start = (char *)s;
	while (*s)
		s++;
	return ((size_t)(s - start));
}
