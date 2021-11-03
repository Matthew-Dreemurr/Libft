/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:20:58 by mahadad           #+#    #+#             */
/*   Updated: 2021/11/03 15:52:29 by mahadad          ###   ########.fr       */
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
	write(1, &c, sizeof(char));
}