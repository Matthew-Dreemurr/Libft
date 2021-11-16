/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:24:10 by mahadad           #+#    #+#             */
/*   Updated: 2021/11/16 13:39:11 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*vect_init(t_vector *vec, size_t size)
{
	if (!vec || !size)
		return (VEC_EXIT_FAILURE);
	vec->len = 0;
	vec->max = size;
	vec->buff = (char *)malloc(size);
	if (!vec->buff)
		return (VEC_EXIT_FAILURE);
	vec->buff[0] = '\0';
	return (vec->buff);
}
