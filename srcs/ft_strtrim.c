/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:20:39 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/09 18:24:07 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdlib.h>

/**
 * @brief 
 * 
 * @param c 
 * @param set 
 * @return int 
 */
static int	check_set(char c, const char *set)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

/**
 * @brief Skip `set` from the beginning and the end of the string
 *        and alloc (trim + 1).
 *
 * @param s1  The string.
 * @param set The caracters to skip.
 * @return char* Pointer to the allocate memory.
 */
static char *alloc_init(char const *s1, char const *set)
{
	const char	*start;
	const char	*end;
	char		*str;
	char		*str_ptr;

	start = s1;
	while (*start && check_set(*start, set))
		start++;
	end = start;
	while (*end && check_set(*end, set))
		end++;
	str = (char *)malloc(((end - start) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str_ptr = str;
	while (*start && start < end)
		*str++ = *start++;
	*str = '\0';
	return (str_ptr);
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
	char	*str;

	str = alloc_init(s1, set);
	if (!str)
		return (NULL);
	return (str);
}

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

//TODO
//TODO
//TODO
//TODO
//TODO
//TODO
//TODO
//TODO
//TODO
//TODO