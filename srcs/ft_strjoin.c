/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:28:33 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/09 17:42:06 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdlib.h>

/**
 * @brief malloc size of (`s1` + `s2` + 1).
 * 
 * @param s1 The prefix string.
 * @param s2 The suffix string.
 * @return char* Pointer to the allocate memory.
 */
static char	*alloc_init(const char *s1, const char *s2)
{
	const char	*s1_p;
	const char	*s2_p;

	s1_p = s1;
	s2_p = s2;
	while (*s1_p)
		s1_p++;
	while (*s2_p)
		s2_p++;
	return ((char *)malloc(sizeof(char) * (1 + (s1_p - s1) + (s2_p - s2))));
}

/**
 * @brief Allocates (with malloc(3)) and returns a new
 *        string, which is the result of the concatenation
 *        of ’s1’ and ’s2’.
 * 
 * @param s1 The prefix string.
 * @param s2 The suffix string.
 * @return char* The new string. NULL if the allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	char	*ret_ptr;

	ret = alloc_init(s1, s2);
	if (!ret)
		return (NULL);
	ret_ptr = ret;
	while (*s1)
		*ret++ = *s1++;
	while (*s2)
		*ret++ = *s2++;
	*ret = '\0';
	return (ret_ptr);
}

/*
#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	char	*str;
	if (ac != 3)
	{
		printf("ERROR\n");
		return (0);
	}
	str = ft_strjoin(av[1], av[2]);
	if (!str)
	{
		printf("NULL!\n");
		return (0);
	}
	else
		printf(
			"expected: [%lu]|%s%s|\n"
			"ft______: [%lu]|%s|\n",
			strlen(av[1]) + strlen(av[2]), av[1], av[2],
			strlen (str), str
		);
	return (0);
}
*/