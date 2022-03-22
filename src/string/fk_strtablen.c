/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fk_strtablen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:01:54 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/04 17:08:20 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	fk_strtablen(const char **tab)
{
	size_t	len;

	len = 0;
	while (*tab)
	{
		len += ft_strlen(*tab);
		tab++;
	}
	return (len);
}
