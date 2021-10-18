/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:16:49 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/18 15:15:55 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*  SYNOPSIS
*       #include <ctype.h>
*
*       int
*       isdigit(int c);
*
*       int
*       isnumber(int c);
*
*  DESCRIPTION
*       The isdigit() function tests for a decimal digit character.  Regardless
*       of locale, this includes the following characters only:
*
*       ``0''         ``1''         ``2''         ``3''         ``4''
*       ``5''         ``6''         ``7''         ``8''         ``9''
*
*       The isnumber() function behaves similarly to isdigit(), but may recognize
*       additional characters, depending on the current locale setting.
*
*       The value of the argument must be representable as an unsigned char or
*       the value of EOF.
*
*  RETURN VALUES
*       The isdigit() and isnumber() functions return zero if the character tests
*       false and return non-zero if the character tests true.
*/

int	ft_isdigit(int c)
{
	return ((c >= '0') && (c <= '9'));
}
