/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:08:41 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/09 18:04:40 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
* SYNOPSIS
*   #include <stdlib.h>
* 
*   int
*   atoi(const char *str);
* 
* DESCRIPTION
*   The atoi() function converts the initial portion of the string pointed to
*   by str to int representation.
* 
*   It is equivalent to:
* 
*     (int)strtol(str, (char **)NULL, 10);
* 
*   While the atoi() function uses the current locale, the atoi_l() function
*   may be passed a locale directly. See xlocale(3) for more information.
* 
* IMPLEMENTATION NOTES
*   The atoi() and atoi_l() functions are thread-safe and async-cancel-safe.
* 
*   The strtol() and strtol_l() functions are recommended instead of atoi()
*   and atoi_l() functions, especially in new code.
* 
* ERRORS
*   The function atoi() need not affect the value of errno on an error.
*/

int	ft_atoi(const char *str)
{
	long	nbr;
	long	cutoff;
	int		cutlim;
	int		isneg;

	nbr = 0;
	isneg = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	isneg = (*str == '-');
	str += (isneg || *str == '+');
	cutoff = (long)(LONG_MAX / 10);
	cutlim = (int)(LONG_MAX % 10);
	while (ft_isdigit((int)*str))
	{
		if (nbr > cutoff || (nbr == cutoff && (int)(*str - '0') > cutlim))
			return (-!isneg);
		nbr *= 10;
		nbr += (*str - '0');
		str++;
	}
	return ((int []){nbr, -nbr}[isneg]);
}

#include <stdio.h>
#include <stdlib.h>

/*
//TODO CHECK WHY THIS RESULT
./a.out 21474836488888
input >>|21474836488888|
or_[8888]
st_[8888]
ft_[8888]
*/

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		printf("ERROR!\n");
		return (0);
	}
	printf("input >>|%s|\n", av[1]);
	printf(
		"or_[%d]\nst_[%d]\nft_[%d]\n",
		atoi(av[1])
		,(int)strtol(av[1], (char **)NULL, 10)
		,ft_atoi(av[1])
		);
}