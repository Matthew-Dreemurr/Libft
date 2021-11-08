/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:01:54 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/20 12:46:37 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*  SYNOPSIS
*    #include <string.h>
*
*    char *
*    strnstr(const char *haystack, const char *needle, size_t len);
*
*    #include <string.h>
*    #include <xlocale.h>
*
*  DESCRIPTION
*    The strnstr() function locates the first occurrence of the null-termi-
*    nated string needle in the string haystack, where not more than len char-
*    acters are searched.  Characters that appear after a `\0' character are
*    not searched.  Since the strnstr() function is a FreeBSD specific API, it
*    should only be used when portability is not a concern.
*
*  RETURN VALUES
*    If needle is an empty string, haystack is returned; if needle occurs
*    nowhere in haystack, NULL is returned; otherwise a pointer to the first
*    character of the first occurrence of needle is returned.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ret;
	size_t	i;
	size_t	hay_len;
	size_t	nee_len;

	hay_len = ft_strlen(haystack);
	nee_len = ft_strlen(needle);
	ret = (char *)haystack;
	if (!nee_len)
		return (ret);
	i = 0;
	if (hay_len < nee_len)
		return (NULL);
	while (*ret && nee_len <= len)
	{
		if (!ft_strncmp(haystack + i, needle, nee_len))
			return (ret);
		ret++;
		len--;
		i++;
	}
	return (NULL);
}
