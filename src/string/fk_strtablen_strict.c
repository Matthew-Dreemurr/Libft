/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fk_strtablen_strict.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:01:54 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/04 17:11:51 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	fk_strtablen_strict(const char **tab, size_t limit)
{
	size_t	len;

	len = 0;
	while (limit-- && *tab)
	{
		len += ft_strlen(*tab);
		tab++;
	}
	return (len);
}
