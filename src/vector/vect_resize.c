/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_resize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:24:27 by mahadad           #+#    #+#             */
/*   Updated: 2021/11/15 11:36:02 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief Resize the buffer wit `size`.
 * 
 * @param v 
 * @param size 
 * @return char* 
 */
char	*vect_resize(t_vector *v, size_t size)
{
	char	*tmp;

	if (!v || !v->max)
		return (VEC_EXIT_FAILURE);
	tmp = v->buff;
	v->max = size;
	v->buff = (char *)malloc(v->max);
	if (!v->buff)
	{
		v->buff = tmp;
		return (VEC_EXIT_FAILURE);
	}
	ft_memcpy(v->buff, tmp, v->len);
	free(tmp);
	return (v->buff);
}
