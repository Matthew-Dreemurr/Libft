/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:01:54 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/06 11:08:45 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

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
	const char	*start;

	start = needle;
	if (!(*needle))
		return ((char *)haystack);
	while (*haystack && len)
	{
		if (*haystack == *needle)
		{
			needle++;
			if (!(*needle))
				return ((char *)(haystack - ((needle - 1) - start)));
		}
		else
			needle = start;
		haystack++;
		len--;
	}
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>
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