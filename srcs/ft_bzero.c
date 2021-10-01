/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:20:28 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/01 17:29:13 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
LIBRARY
     Standard C Library (libc, -lc)

SYNOPSIS
     #include <strings.h>

     void
     bzero(void *s, size_t n);

DESCRIPTION
     The bzero() function writes n zeroed bytes to the string s.  If n is
     zero, bzero() does nothing.
*/

void ft_bzero(void *s, size_t n)
{
	unsigned char *cpy;

	cpy = (unsigned char*)s;
	while (n)
	{
		*cpy = (char)0;
		cpy++;
		n--;
	}
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int ac, char **av)//TODO
{
	int	size;
	char *str1;
	char *str2;

	if (ac != 3 )
	{
		printf("[str] [len]");
		return (0);
	}
	size = (int)atoi(av[3]);
	str1 = strdup(av[1]);
	str2 = strdup(av[1]);
	ft_bzero(str1, size);
	bzero(str2, size);
	printf("FT_ |%s| <==> |%s|\n", av[1], str1);
	printf("OR  |%s| <==> |%s|\n", av[1], str2);
	return (0);
}
