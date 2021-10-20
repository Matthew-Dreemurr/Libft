/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:20:39 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/20 12:46:44 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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
static void	cpy_start_to_end(char *str, const char *start, const char *end)
{
	while (*start && start < end)
		*str++ = *start++;
	*str = '\0';
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
	const char	*end_start;
	char		*str;

	if (!s1 || !set)
		return (NULL);
	start = s1;
	while (*start && check_set(*start, set))
		start++;
	end = start;
	while (*end)
	{
		end_start = end;
		while (*end_start && check_set(*end_start, set))
			end_start++;
		if (!*end_start)
			break ;
		end++;
	}
	str = (char *)malloc(((end - start) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	cpy_start_to_end(str, start, end);
	return (str);
}
