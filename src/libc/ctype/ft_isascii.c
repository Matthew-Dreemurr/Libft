/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:33:43 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/18 15:15:55 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*  LIBRARY
*       Standard C Library (libc, -lc)
*
*  SYNOPSIS
*       #include <ctype.h>
*
*       int
*       isascii(int c);
*
*  DESCRIPTION
*       The isascii() function tests for an ASCII character, which is any charac-
*       ter between 0 and octal 0177 inclusive.
*/

int	ft_isascii(int c)
{
	return ((c >= 0) && (c <= 127));
}
