/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:21:18 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/08 17:59:17 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdlib.h>

/*
* SYNOPSIS
*  #include <stdlib.h>
*
*  void *
*  calloc(size_t count, size_t size);
*
* DESCRIPTION
*  The malloc(), calloc(), valloc(), realloc(), and reallocf() functions
*  allocate memory.  The allocated memory is aligned such that it can be
*  used for any data type, including AltiVec- and SSE-related types.  The
*  aligned_alloc() function allocates memory with the requested alignment.
*  The free() function frees allocations that were created via the preceding
*  allocation functions.
*
*  The calloc() function contiguously allocates enough space for count
*  objects that are size bytes of memory each and returns a pointer to the
*  allocated memory.  The allocated memory is filled with bytes of value
*  zero.
*
* RETURN VALUES
*  If successful, calloc(), malloc(), realloc(), reallocf(), valloc(), and
*  aligned_alloc() functions return a pointer to allocated memory.  If there
*  is an error, they return a NULL pointer and set errno to ENOMEM.
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	mem = (void *)malloc(count * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, count * size);
	return (mem);
}

/*
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*ft_test;
	char	*or_test;
	if (ac != 3)
	{
		printf("ERROR!\n");
		return (0);
	}
	size_t	count = strtoul(av[1], (char **)NULL, 10);
	size_t	size = strtoul(av[2], (char **)NULL, 10);
	
	ft_test = NULL;
	printf("ft_aft_test [%p]\n", ft_test);
	ft_test = ft_calloc(count, size);
	printf("ft_bef_test [%p]\n", ft_test);

	or_test = NULL;
	printf("or_aft_test [%p]\n", or_test);
	or_test = calloc(count, size);
	printf("or_bef_test [%p]\n", or_test);

	for (size_t i = 0 ; i < (count*size) ; i++)
	{
		printf(
				"ft_test[%lu] = |%d| VS ",
				i,
				ft_test[i]
		);
		printf(
				"or_test[%lu] = |%d|\n",
				i,
				or_test[i]
		);
	}
}
*/