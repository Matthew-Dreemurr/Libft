/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:36:04 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/13 16:47:50 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <unistd.h>

/**
 * @brief 
 * 
 * @param n  The integer to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putnbr_fd(int n, int fd)
{
	char	tmp;

	if (n == INT_MIN)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n *= -1;
		}
		tmp = 0;
		tmp = n % 10;
		tmp += '0';
		n /= 10;
		if (n > 0)
			ft_putnbr_fd(n, fd);
		write(fd, &tmp, 1);
	}
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
	ft_putnbr_fd((int)strtol(v[1], (char **)NULL, 10),
							(int)strtol(v[2], (char **)NULL, 10));
	return (0);
}
*/