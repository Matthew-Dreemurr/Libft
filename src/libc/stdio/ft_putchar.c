/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:20:58 by mahadad           #+#    #+#             */
/*   Updated: 2021/11/07 13:26:56 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/**
 * @brief Outputs the character ’c’ to the `stdout`.
 * 
 * @param c  The character to output.
 */
void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}
