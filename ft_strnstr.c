/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:01:54 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/18 16:09:30 by mahadad          ###   ########.fr       */
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

static size_t	fk_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (s)
		while (s[i])
			i++;
	return (i);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ret;
	size_t	i;
	size_t	hay_len;
	size_t	nee_len;

	hay_len = fk_strlen(haystack);
	nee_len = fk_strlen(needle);
	ret = (char *)haystack;
	i = 0;
	if (!nee_len)
		return (ret);
	if (hay_len < nee_len || !hay_len)
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

/*
#include <stdlib.h>

int	main(int ac, char **av)
{
	char	*ret_or;
	char	*ret_ft;

	if (ac != 4)
	{
		printf("ERROR!\n");
		return (0);
	}
	ret_or = strnstr(av[1], av[2], atoi(av[3]));
	ret_ft = ft_strnstr(av[1], av[2], atoi(av[3]));
	printf("or_ [%p] |%s|\n", ret_or, ret_or);
	printf("ft_ [%p] |%s|\n", ret_ft, ret_ft);
}
*/