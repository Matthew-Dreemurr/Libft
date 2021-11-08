/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:06:42 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/20 12:46:51 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*  SYNOPSIS
*    #include <ctype.h>
*
*    int
*    tolower(int c);
*
*    #include <ctype.h>
*    #include <xlocale.h>
*
*  DESCRIPTION
*    The tolower() function converts an upper-case letter to the corresponding
*    lower-case letter.  The argument must be representable as an unsigned
*    char or the value of EOF.
*
*    Although the tolower() function uses the current locale, the tolower_l()
*    function may be passed a locale directly. See xlocale(3) for more infor-
*    mation.
*
*  RETURN VALUES
*    If the argument is an upper-case letter, the tolower() function returns
*    the corresponding lower-case letter if there is one; otherwise, the argu-
*    ment is returned unchanged.
*/

int	ft_tolower(int c)
{
	if (ft_isalpha(c))
		if (c >= 'A' && c <= 'Z')
			return ((c + 32));
	return (c);
}
