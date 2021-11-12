/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:24:10 by mahadad           #+#    #+#             */
/*   Updated: 2021/11/12 16:51:02 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*vect_init(t_vector *v, size_t size)
{
	if (!v || !size)
		return (VEC_EXIT_FAILURE);
	v->len = 0;
	v->max = size;
	v->buff = (char *)malloc(size);
	if (!v->buff)
		return (VEC_EXIT_FAILURE);
	v->buff[0] = '\0';
	return (v->buff);
}
