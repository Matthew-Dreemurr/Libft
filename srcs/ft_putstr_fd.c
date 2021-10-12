/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:56:02 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/12 14:31:00 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <unistd.h>

/**
 * @brief Outputs the string ’s’ to the given file descriptor.
 * 
 * @param s  The string to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	while (*s)
		write(fd, &(*s++), sizeof(char));
}

/*
#include <stdlib.h>

int	main(int c, char **v)
{
	if (c != 3)
	{
		ft_putstr_fd("ERROR!\n", 1);
		return (1);
	}
	ft_putstr_fd(v[1], (int)strtol(v[2], (char **)NULL, 10));
	return (0);
}
*/