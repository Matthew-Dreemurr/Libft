/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 10:16:53 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/10 12:23:24 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * @brief Count the number of word in str + 1 and alloc a tab.
 *        all tab point a NULL pointer.
 * @param str 
 * @param c   The separator caracter
 * @return size_t 
 */
static char	**alloc_tab(const char *str, char c)
{
	size_t	size;
	char	**tab;

	size = 1;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (!*str)
			break ;
		while (*str && *str != c)
			str++;
		size++;
		if (*str)
			str++;
	}
	tab = (char **)malloc(sizeof(char *) * size);
		if (!tab)
			return (NULL);
	while (--size)
		tab[size] = NULL;
	return (tab);
}

/**
 * @brief
 * 
 * @param str
 * @param c
 * @return char* 
 */
static char *world_dup(const char *str, char c)
{
	void	*ptr;
	char	*start;

	ptr = (void *)str;
	while (*(const char *)ptr && *(const char *)ptr != c)
		ptr++;
	ptr = (char *)malloc(sizeof(char) * (size_t)((const char *)ptr - str) + 1);
	if (!ptr)
		return (NULL);
	start = (char *)ptr;
	while (*str && *str != c)
		*(char *)ptr++ = *str++;
	*(char *)ptr = '\0';
	return (start);
}

/**
 * @brief Will free all allocate tab and the tab pointer.
 * 
 * @param tab 
 * @return char** Will return `NULL` pointer.
 */
static char **error_tab_free(char **tab)
{
	while (*tab)
		free(*tab);
	if (*tab)
		free (tab);
	return (NULL);
}

/**
 * @brief Allocates (with malloc(3)) and returns an array
 *        of strings obtained by splitting ’s’ using the
 *        character ’c’ as a delimiter.  The array must be
 *        ended by a NULL pointer.
 * 
 * @param s The string to be split.
 * @param c The delimiter character.
 * @return char** The array of new strings resulting from the split.
 *         NULL if the allocation fails.
 */
char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	**ptr;

	tab = alloc_tab(s, c);
	if (!tab)
		return (NULL);
	ptr = tab;
	while (*s)
	{
		printf("*s|%s|\n", s);
		getchar();
		while (*s && *s == c)
			s++;
		*ptr = world_dup(s, c);
		if (!*ptr)
			return (error_tab_free(tab));
		printf("*ptr|%s|\n", *ptr);
		ptr++;
		s++;
	}
	*ptr = NULL;
	return (tab);
}

/*
"aaaa.bbb.ccc.dd...eeef...g.ss.....d.."
"..aaaa.bbb.ccc.dd...eeef...g.ss.....d"
"..aaaa.bbb.ccc.dd...eeef...g.ss.....d....."
*/


int	main(int ac, char **av)
{
	char **tab;
	char **ptr;

	if (ac != 3)
	{
		printf("ERROR!\n");
		return (0);
	}
	tab = ft_split(av[1], av[2][0]);
	ptr = tab;
	if (!tab)
	{
		printf("NULL!\n");
		return (0);
	}
	else
	{
		while (*tab)
		{
		printf(
			"|%s|\n",
			*tab
		);
		tab ++;
		}
		while (*ptr)
		{
			free (*ptr);
			ptr++;
		}
		free(ptr);
	}
	return (0);
}