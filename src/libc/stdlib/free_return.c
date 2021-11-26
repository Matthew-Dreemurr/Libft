/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_return.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:49:16 by mahadad           #+#    #+#             */
/*   Updated: 2021/11/16 13:53:20 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief 
 * 
 * @param ptr 
 * @param ret 
 * @return int 
 */
void	*free_return(void *ptr, void *ret)
{
	free (ptr);
	return (ret);
}
