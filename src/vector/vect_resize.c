/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_resize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:24:27 by mahadad           #+#    #+#             */
/*   Updated: 2021/11/09 14:47:32 by mahadad          ###   ########.fr       */
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
	if (!vect_new(v->max, v))
		return (VEC_EXIT_FAILURE);
	ft_memmove(v->buff, tmp, v->len);
	free(tmp);
	return (VEC_EXIT_SUCCESS);
}
