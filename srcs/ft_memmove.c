/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:52:32 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/04 14:53:28 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*  LIBRARY
*       Standard C Library (libc, -lc)
*  
*  SYNOPSIS
*       #include <string.h>
*  
*       void *
*       memmove(void *dst, const void *src, size_t len);
*  
*  DESCRIPTION
*       The memmove() function copies len bytes from string src to string dst.
        The two strings may overlap; the copy is always done in a
*       non-destructive manner.
*  
*  RETURN VALUES
*       The memmove() function returns the original value of dst.
*/

#include "../include/libft.h"

