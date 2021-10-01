/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:47:47 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/01 17:24:49 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*===[ INCLUDE ]===*/
#include <stddef.h>

/*===[ PROTOTYPE ]===*/

/*=={ ctype.h }==*/
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int isascii(int c);
int isprint(int c);

/*=={ string.h }==*/
size_t strlen(const char *s);
void *memset(void *b, int c, size_t len);
void bzero(void *s, size_t n);
void ft_bzero(void *s, size_t n);

#endif