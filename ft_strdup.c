/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:57:34 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/18 15:15:55 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* SYNOPSIS
*   #include <string.h>
*
*   char *
*   strdup(const char *s1);
*
* DESCRIPTION
*   The strdup() function allocates sufficient memory for a copy of the
*   string s1, does the copy, and returns a pointer to it.  The pointer may
*   subsequently be used as an argument to the function free(3).
*
*   If insufficient memory is available, NULL is returned and errno is set to
*   ENOMEM.
*
*   The strndup() function copies at most n characters from the string s1
*   always NUL terminating the copied string.
*/

#include <stdlib.h>

static size_t	md_strlen(const char *str)
{
	const char	*start;

	start = str;
	while (str && *str)
		str++;
	return ((size_t)(str - start));
}

char	*ft_strdup(const char *s1)
{
	char	*ret;
	char	*start;

	ret = (char *)malloc((md_strlen(s1) + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	start = ret;
	while (*s1)
	{
		*ret = *s1;
		ret++;
		s1++;
	}
	*ret = '\0';
	return (start);
}

/*
#include <string.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	char	*str1;
	char	*str2;

	if (ac != 2)
	{
		printf("ERROR\n");
		return (0);
	}
	str1 = ft_strdup(av[1]);
	str2 = strdup(av[1]);
	if (str1)
	{
		printf("ft_[%lu]|%s|\n",strlen(str1), str1);
		free(str1);
	}
	else
		printf("ft_NULL!\n");
	if (str2)
	{
		printf("or_[%lu]|%s|\n",strlen(str2), str2);
		free(str2);
	}
	else
		printf("or_NULL!\n");
	return (0);
}
*/