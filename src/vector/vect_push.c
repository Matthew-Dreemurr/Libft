/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:31:01 by mahadad           #+#    #+#             */
/*   Updated: 2021/11/16 13:39:11 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief
 * 
 * @param vec 
 * @param str 
 * @return int 
 */
char	*vect_push(t_vector *vec, char c)
{
	size_t	len;

	if (!vec)
		return (VEC_EXIT_FAILURE);
	len = 1;
	while (vec->max < (vec->len + (len + 1)))
		if (!vect_resize(vec, vec->max * 2))
			return (VEC_EXIT_FAILURE);
	vec->buff[vec->len++] = c;
	vec->buff[vec->len] = '\0';
	return (vec->buff);
}
