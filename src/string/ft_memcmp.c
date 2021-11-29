/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 09:19:20 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/20 12:45:18 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*  SYNOPSIS
*    #include <string.h>
*  
*    int
*    memcmp(const void *s1, const void *s2, size_t n);
*  
*  DESCRIPTION
*    The memcmp() function compares byte string s1 against byte string s2.
*    Both strings are assumed to be n bytes long.
*  
*  RETURN VALUES
*    The memcmp() function returns zero if the two strings are identical, oth-
*    erwise returns the difference between the first two differing bytes
*    (treated as unsigned char values, so that `\200' is greater than `\0',
*    for example).  Zero-length strings are always identical.  This behavior
*    is not required by C and portable code should only depend on the sign of
*    the returned value.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_ptr;
	const unsigned char	*s2_ptr;

	s1_ptr = (const unsigned char *)s1;
	s2_ptr = (const unsigned char *)s2;
	while (n--)
	{
		if (*s1_ptr != *s2_ptr)
			return ((int)((*s1_ptr) - (*s2_ptr)));
		s1_ptr++;
		s2_ptr++;
	}
	return (0);
}
