/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:20:39 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/10 10:15:53 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdlib.h>

/**
 * @brief Check if the carater is in the set.
 * 
 * @param c
 * @param set
 * @return int return `1` if find `0` if not.
 */
static int	check_set(char c, const char *set)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

/**
 * @brief Copy form `start` to `end`
 * 
 * @param str
 * @param start
 * @param end
 */
static void	cpystarttoend(char **str, const char *start, const char *end)
{
	char	*ptr;

	ptr = *str;
	while (*start && start < end)
		*ptr++ = *start++;
	*ptr = '\0';
}

/**
 * @brief Allocates (with malloc(3)) and returns a copy of
 *        ’s1’ with the characters specified in ’set’ removed
 *        from the beginning and the end of the string.
 * 
 * @param s1   The string to be trimmed.
 * @param set  The reference set of characters to trim.
 * @return char* The trimmed string. NULL if the allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*start;
	const char	*end;
	const char	*ptr;
	char		*str;

	start = s1;
	while (*start && check_set(*start, set))
		start++;
	end = start;
	while (*end)
	{
		ptr = end;
		while (*ptr && check_set(*ptr, set))
			ptr++;
		if (!*ptr)
			break ;
		end++;
	}
	str = (char *)malloc(((end - start) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	cpystarttoend(&str, start, end);
	return (str);
}

/*
#include <string.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*str;
	if (ac != 3)
	{
		printf("ERROR\n");
		return (0);
	}
	str = ft_strtrim(av[1], av[2]);
	if (!str)
	{
		printf("NULL!\n");
		return (0);
	}
	else
		printf(
			"ft______: [%lu]|%s|\n",
			strlen (str), str
		);
	return (0);
}
*/