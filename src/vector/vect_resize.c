/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_resize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:24:27 by mahadad           #+#    #+#             */
/*   Updated: 2021/11/09 16:25:18 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	vect_resize(t_vector *v)
{
	char	*tmp;

	if (!v || !v->max)
		return (VEC_EXIT_FAILURE);
	tmp = v->buff;
	v->max *= 2;
	v->buff = (char *)malloc(v->max);
	if (!v->buff)
		return (VEC_EXIT_FAILURE);
	ft_memcpy(v->buff, tmp, v->len);
	free (tmp);
	return (VEC_EXIT_SUCCESS);
}
