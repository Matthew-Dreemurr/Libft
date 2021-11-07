/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar_ret_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:20:58 by mahadad           #+#    #+#             */
/*   Updated: 2021/11/07 13:28:22 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/**
 * @brief       Outputs the character ’c’ to the `stdout`.
 *
 * @param c     The character to output.
 *
 * @return int  Return the number of char print.
 */
int	putchar_ret_int(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
