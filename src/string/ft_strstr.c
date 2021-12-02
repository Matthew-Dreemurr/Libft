/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:01:54 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/02 13:27:01 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* SYNOPSIS
*   #include <string.h>
*
*   char *
*   strstr(const char *haystack, const char *needle);
*
* DESCRIPTION
*   The strstr() function locates the first occurrence of the null-terminated
*   string needle in the null-terminated string haystack.
*
* RETURN VALUES
*   If needle is an empty string, haystack is returned; if needle occurs
*   nowhere in haystack, NULL is returned; otherwise a pointer to the first
*   character of the first occurrence of needle is returned.
*/

char	*ft_strstr(const char *haystack, const char *needle)
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
	while (*ret && nee_len)
	{
		if (!ft_strncmp(haystack + i, needle, nee_len))
			return (ret);
		ret++;
		i++;
	}
	return (NULL);
}
