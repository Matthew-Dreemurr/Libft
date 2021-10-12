/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:36:04 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/12 15:10:48 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief 
 * 
 * @param n  The integer to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putnbr_fd(int n, int fd)
{
	char	*ptr;

	if (fd < 0)
		return ;
	ptr = ft_itoa(n);
	if (!ptr)
		return ;
	ft_putstr_fd(ptr, fd);
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