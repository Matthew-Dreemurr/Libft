/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:56:02 by mahadad           #+#    #+#             */
/*   Updated: 2021/11/03 15:47:17 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/**
 * @brief    Outputs the string ’s’ to `stdout`.
 *
 * @param s  The string to output.
 *
 * @return   Return numbre of char print.
 */
int	putstr_ret_int(char *s)
{
	char	*start;


	if (!s)
		return 0;
	start = s;
	while (*s)
		write(1, &(*s++), sizeof(char));
	return ((int)(s - start));
}
