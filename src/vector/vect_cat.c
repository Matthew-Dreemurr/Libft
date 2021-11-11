/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_cat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:31:01 by mahadad           #+#    #+#             */
/*   Updated: 2021/11/11 12:35:02 by mahadad          ###   ########.fr       */
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
int	vect_cat(t_vector *v, char *str)
{
	size_t	len;

	if (!str)
		return (VEC_EXIT_FAILURE);
	len = strlen_protect(str);
	while (v->max < (v->len + (len + 1)))
		if (!vect_resize(v, v->max * 2))
			return (VEC_EXIT_FAILURE);
	while (*str)
		v->buff[v->len++] = *str++;
	v->buff[v->len] = '\0';
	return (VEC_EXIT_SUCCESS);
}
