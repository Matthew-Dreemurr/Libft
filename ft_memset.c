/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:57:48 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/20 12:45:20 by mahadad          ###   ########.fr       */
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
