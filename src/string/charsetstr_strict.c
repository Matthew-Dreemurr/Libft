/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charsetstr_strict.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 21:10:16 by mahadad           #+#    #+#             */
/*   Updated: 2021/12/03 21:29:19 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Will check if the string is only composed with the character in `set`.
 * 
 * @param str The string.
 * @param set The caracter check
 * @return int `1` if all the char in `str` is composed with the char in `set`,
 *              else `0`.
 */
int	charsetstr_strict(char *str, char *set)
{
	int	i;

	i = 0;
	while (*str)
	{
		while (set[i])
		{
			if (set[i] == *str)
				break ;
			i++;
		}
		if (!set[i])
			return (0);
		i = 0;
		str++;
	}
	return (1);
}
