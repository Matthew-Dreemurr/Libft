/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin_and_free.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:59:26 by mahadad           #+#    #+#             */
/*   Updated: 2021/11/16 13:52:56 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*strj_free_return(char **ptr)
{
	if (*ptr)
		free(*ptr);
	return (NULL);
}

/**
 * @brief malloc size of (`s1` + `s2` + 1).
 *        `s1` and `s2` can be NULL.
 * 
 * @param s1 The prefix string can be NULL.
 * @param s2 The suffix string can be NULL.
 * @return char* Pointer to the allocate memory.
 */
static char	*alloc_init(const char *s1, const char *s2)
{
	const char	*s1_p;
	const char	*s2_p;

	s1_p = s1;
	s2_p = s2;
	while (s1_p && *s1_p)
		s1_p++;
	while (s2_p && *s2_p)
		s2_p++;
	return ((char *)malloc(sizeof(char) * (1 + (s1_p - s1) + (s2_p - s2))));
}

/**
 * @brief Allocates (with malloc(3)) and returns a new
 *        string, which is the result of the concatenation
 *        of ’s1’ and ’s2’ and free the `s1`.
 *        `s1` and `s2` can be NULL.
 *        In case dat alloc fail, `*s1` will be free.
 *
 * @param s1 The prefix string can be NULL.
 * @param s2 The suffix string can be NULL.
 * @return char* The new string. NULL if the allocation fails.
 */
char	*strjoin_and_free(char **s1, char const *s2)
{
	char	*ret;
	char	*ret_ptr;
	char	*s1_ptr;

	ret = alloc_init(*s1, s2);
	if (!ret)
		return (strj_free_return(s1));
	s1_ptr = *s1;
	ret_ptr = ret;
	while (s1_ptr && *s1_ptr)
		*ret++ = *s1_ptr++;
	while (s2 && *s2)
		*ret++ = *s2++;
	*ret = '\0';
	if (s1 && *s1)
	{
		free (*s1);
		*s1 = NULL;
	}
	return (ret_ptr);
}
