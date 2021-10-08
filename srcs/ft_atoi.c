/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:08:41 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/08 19:35:22 by mahadad          ###   ########.fr       */
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

//TODO check overflow https://discord.com/channels/@me/760551181596229663/896074350615220264

static int	illegal_val(int sing)
{
	if (sing < 0)
		return (0);
	else
		return (-1);
}

int	ft_atoi(const char *str)
{
	long	nbr;
	long	limit;
	int		isneg;

	nbr = 0;
	isneg = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			isneg = -1;
		str++;
	}
	limit = LONG_MAX / 10;
	while (ft_isdigit((int)*str))
	{
		if (nbr > limit)
			return (illegal_val(isneg));
		nbr *= 10;
		nbr += (*str - '0');
		str++;
	}
	return ((int)(nbr * isneg));
}

/*
#include <stdio.h>
#include <stdlib.h>

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
*/