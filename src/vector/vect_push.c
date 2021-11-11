/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:31:01 by mahadad           #+#    #+#             */
/*   Updated: 2021/11/11 15:09:44 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief
 * 
 * @param v 
 * @param str 
 * @return int 
 */
int	vect_push(t_vector *v, char c)
{
	size_t	len;

	if (!v)
		return (VEC_EXIT_FAILURE);
	len = 1;
	while (v->max < (v->len + (len + 1)))
		if (!vect_resize(v, v->max * 2))
			return (VEC_EXIT_FAILURE);
	v->buff[v->len++] = c;
	v->buff[v->len] = '\0';
	return (VEC_EXIT_SUCCESS);
}
