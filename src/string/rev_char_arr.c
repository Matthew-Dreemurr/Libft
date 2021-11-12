/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_char_arr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:06:36 by mahadad           #+#    #+#             */
/*   Updated: 2021/11/12 16:09:13 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	rev_char_arr(char *str, size_t size)
{
	size_t	x;
	size_t	mid;
	char	tmp;

	x = 0;
	mid = size / 2;
	size--;
	while (size >= mid)
	{
		tmp = str[x];
		str[x] = str[size];
		str[size] = tmp;
		size--;
		x++;
	}
}