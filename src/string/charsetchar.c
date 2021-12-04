/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charsetchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 21:10:16 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/05 00:24:59 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Will check if the char is composed with one of the character in `set`.
 *         Only
 * 
 * @param c The char.
 * @param set The caracter set.
 * @return int the index if the char in `set`, else `-1`.
 */
int	charsetchar(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			break ;
		i++;
	}
	if (!set[i])
		return (-1);
	return (i);
}
