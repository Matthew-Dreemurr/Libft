/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:57:48 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/18 15:15:55 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*  SYNOPSIS
*       #include <string.h>
*
*       void *
*       memset(void *b, int c, size_t len);
*
*  DESCRIPTION
*       The memset() function writes len bytes of value c (converted to an
*       unsigned char) to the string b.
*
*  RETURN VALUES
*       The memset() function returns its first argument.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*cpy;

	cpy = (unsigned char *)b;
	while (len)
	{
		*cpy = (char)c;
		cpy++;
		len--;
	}
	return (b);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int ac, char **av)
{
	int	size;
	char *str1;
	char *str2;

	if (ac != 4 )
	{
		printf("[str] [character] [len]");
		return (0);
	}
	size = (int)atoi(av[3]);
	str1 = strdup(av[1]);
	str2 = strdup(av[1]);
	str1 = ft_memset(str1, av[2][0], size);
	str2 = memset(str2, av[2][0], size);
	printf("FT_ |%s| <==> |%s|\n", av[1], str1);
	printf("OR  |%s| <==> |%s|\n", av[1], str2);
	return (0);
}
*/