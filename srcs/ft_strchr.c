/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:47:01 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/05 18:24:35 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
*  SYNOPSIS
*    #include <string.h>
*  
*    char *
*    strchr(const char *s, int c);
*  
*  
*  DESCRIPTION
*    The strchr() function locates the first occurrence of c (converted to a
*    char) in the string pointed to by s.  The terminating null character is
*    considered to be part of the string; therefore if c is `\0', the func-
*    tions locate the terminating `\0'.
*  
*    The strrchr() function is identical to strchr(), except it locates the
*    last occurrence of c.
*  
*  RETURN VALUES
*    The functions strchr() and strrchr() return a pointer to the located
*    character, or NULL if the character does not appear in the string.
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>

// ./a.out "xxxxxxxxxxxxxxxxxxxxbzzzzzzzzzz" b
// ./a.out "xxxxxxxxxxxxxxxxxxxxyzzzzzzzzzz" b
// ./a.out "xxxxxxxxxxxbxxxxxxxxxzbzzzzzzzz" b
// ./a.out "xxxxxxxxxxxbxxxxxxxxxzbzzzzzzzzz" ''
// ./a.out "xxxxxxxxxxxbxxxxxxxxxzbzzzzzzzzz" ' '

int	main(int ac, char **av)
{
	char	*ret_or;
	char	*ret_ft;

	if (ac != 3)
	{
		printf("ERROR!\n");
		return (0);
	}
	ret_or = strchr(av[1], av[2][0]);
	ret_ft = ft_strchr(av[1], av[2][0]);
	printf("or_ [%p] |%s|\n", ret_or, ret_or);
	printf("ft_ [%p] |%s|\n", ret_ft, ret_ft);
}
*/