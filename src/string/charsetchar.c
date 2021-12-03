/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charsetchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 21:10:16 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/03 22:41:49 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Will check if the char is composed with one of the character in `set`.
 * 
 * @param c The char.
 * @param set The caracter set.
 * @return int `1` if all the char in `str` is composed with the char in `set`,
 *              else `0`.
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
		return (0);
	return (1);
}
