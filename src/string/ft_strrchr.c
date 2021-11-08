/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:26:59 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/20 12:46:40 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*  SYNOPSIS
*    #include <string.h>
*
*    char *
*    strrchr(const char *s, int c);
*
*  DESCRIPTION
*    The strchr() function locates the first occurrence of c (converted to a
*    char) in the string pointed to by s.  The terminating null character is
*    considered to be part of the string; therefore if c is `\0', the func-
*    tions locate the terminating `\0'.
*
*    The strrchr() function is identical to strchr(), except it locates the
*    last occurrence of c.
*
*  RETURN VALUES
*    The functions strchr() and strrchr() return a pointer to the located
*    character, or NULL if the character does not appear in the string.
*/

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*s)
	{
		if (*s == (char)c)
			ptr = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (ptr);
}
