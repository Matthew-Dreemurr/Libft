/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:56:02 by mahadad           #+#    #+#             */
/*   Updated: 2021/11/07 13:27:47 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/**
 * @brief Outputs the string ’s’ to `stdout`.
 * 
 * @param s  The string to output.
 */
void	ft_putstr(char *s)
{
	char	*ptr;

	if (!s)
		return ;
	ptr = s;
	while (*ptr)
		ptr++;
	write(STDOUT_FILENO, s, (size_t)(ptr - s));
}
