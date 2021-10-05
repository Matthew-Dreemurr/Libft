/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:40:12 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/05 17:12:58 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
*  SYNOPSIS
*    #include <ctype.h>
*
*    int
*    toupper(int c);
*
*    #include <ctype.h>
*    #include <xlocale.h>
*
*  DESCRIPTION
*    The toupper() function converts a lower-case letter to the corresponding
*    upper-case letter.  The argument must be representable as an unsigned
*    char or the value of EOF.
*
*  RETURN VALUES
*    If the argument is a lower-case letter, the toupper() function returns
*    the corresponding upper-case letter if there is one; otherwise, the argu-
*    ment is returned unchanged.
*/

int	ft_toupper(int c)
{
	if (ft_isalpha(c))
		if (c >= 'a' && c <= 'z')
			return ((c - 32));
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>

// examples: ./a.out "SaLuCoMmentCaVa@(=}["
int	main(int ac, char **av)
{
	char *ptr;

	if (ac != 2)
	{
		printf("ERROR!\n");
		return (0);
	}
	av++;
	ptr = *av;
	while (*ptr)
	{
		printf("char   |%c|\n", *ptr);
		printf("or_ret |%c|\n", toupper((int)(*ptr)));
		printf("ft_ret |%c|\n\n", ft_toupper((int)(*ptr)));
		ptr++;
	}
}
*/