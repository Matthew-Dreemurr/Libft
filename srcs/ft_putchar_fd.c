/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:20:58 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/12 14:29:50 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <unistd.h>

/**
 * @brief Outputs the character ’c’ to the given file
 *        descriptor.
 * 
 * @param c  The character to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, sizeof(char));
}

/*
#include <stdlib.h>
#include <stdio.h>

int	main(int c, char **v)
{
	if (c != 3)
	{
		printf("ERROR!\n");
		return (1);
	}
	ft_putchar_fd(v[1][0], (int)strtol(v[2], (char **)NULL, 10));
	return (0);
}
*/