/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:24:10 by mahadad           #+#    #+#             */
/*   Updated: 2021/11/11 13:57:48 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	vect_init(t_vector *v, size_t size)
{
	if (!v || !size)
		return (VEC_EXIT_FAILURE);
	v->len = 0;
	v->max = size;
	v->buff = (char *)malloc(size);
	if (!v->buff)
		return (VEC_EXIT_FAILURE);
	v->buff[0] = '\0';
	return (VEC_EXIT_SUCCESS);
}
