/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:01:54 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/18 15:15:55 by mahadad          ###   ########.fr       */
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

#include <stdio.h>
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*start;

	start = needle;
	if (!(*needle) || ((long)len) < 0) //TODO check why negatif number F*ckt Up
		return ((char *)haystack);
		printf("|%lu|\n", len);
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
#include <string.h>

int main()
{

	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	char * empty = (char*)"";
	
	setbuf(stdout, NULL);

	printf("or|%s|\nft|%s|\n\n", strnstr(haystack, needle, 0),ft_strnstr(haystack, needle, 0));
	printf("or|%s|\nft|%s|\n\n", strnstr(haystack, needle, -1),ft_strnstr(haystack, needle, -1));
	printf("or|%s|\nft|%s|\n\n", strnstr(haystack, "a", -1),ft_strnstr(haystack, "a", -1));
	printf("or|%s|\nft|%s|\n\n", strnstr(haystack, "c", -1),ft_strnstr(haystack, "c", -1));
	printf("or|%s|\nft|%s|\n\n", strnstr(empty, "", -1),ft_strnstr(empty, "", -1));
	printf("or|%s|\nft|%s|\n\n", strnstr(empty, "", 0),ft_strnstr(empty, "", 0));
	printf("or|%s|\nft|%s|\n\n", strnstr(empty, "coucou", -1),ft_strnstr(empty, "coucou", -1));
	printf("or|%s|\nft|%s|\n\n", strnstr(haystack, "aaabc", 5),ft_strnstr(haystack, "aaabc", 5));
	printf("or|%s|\nft|%s|\n\n", strnstr(empty, "12345", 5),ft_strnstr(empty, "12345", 5));
	printf("or|%s|\nft|%s|\n\n", strnstr(haystack, "abcd", 9),ft_strnstr(haystack, "abcd", 9));
	printf("or|%s|\nft|%s|\n\n", strnstr(haystack, "cd", 8),ft_strnstr(haystack, "cd", 8));
	printf("or|%s|\nft|%s|\n\n", strnstr(haystack, "a", 1),ft_strnstr(haystack, "a", 1));
	return (0);
}