/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:08:41 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/04 14:23:14 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * SYNOPSIS
 *    #include <stdlib.h>
 * 
 *    long
 *    atol(const char *str);
 * 
 * DESCRIPTION
 *    The atol() function converts the initial portion of the string pointed to
 *    by str to long integer representation.
 * 
 *    It is equivalent to:
 *     strtol(str, (char **)NULL, 10);
 *    BUUUUUUT if the number is > LONG_MAX or < LONG_MIN will return `0` if neg
 *    or `-1` if pos.
*/

long	fk_atol(const char *str)
{
	unsigned long	nbr;
	unsigned long	cutoff;
	int				cutlim;
	int				isneg;

	nbr = 0;
	isneg = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	isneg = (*str == '-');
	str += (isneg || *str == '+');
	cutoff = (unsigned long)(LONG_MAX / 10);
	cutlim = (int)(LONG_MAX % 10);
	while (ft_isdigit((int)*str))
	{
		if (nbr > cutoff || (nbr == cutoff && (int)(*str - '0') > cutlim))
			return (-!isneg);
		nbr *= 10;
		nbr += (*str - '0');
		str++;
	}
	return ((long []){nbr, -nbr}[isneg]);
}
