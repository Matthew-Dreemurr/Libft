/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:47:01 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/20 12:45:59 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*  SYNOPSIS
*    #include <string.h>
*  
*    char *
*    strchr(const char *s, int c);
*  
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

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
