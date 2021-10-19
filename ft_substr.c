/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:20:29 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/18 15:15:55 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief Allocates (with malloc(3)) and returns a substring
 *        from the string ’s’.
 *        The substring begins at index ’start’ and is of maximum size ’len’.
 * 
 * @param s      The string from which to create the substring.
 * @param start  The start index of the substring in the string ’s’.
 * @param len    The maximum length of the substring.
 * @return char* The substring. NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_alloc;
	char	*str;
	char	*str_ptr;

	if (!s)
		return (NULL);
	while (*s && start--)
		s++;
	len_alloc = ft_strlen(s);
	len_alloc = (size_t []){len, len_alloc}[len_alloc < len];
	str = (char *)malloc((len_alloc + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str_ptr = str;
	while (len_alloc-- > 0)
		*str_ptr++ = *s++;
	*str_ptr = '\0';
	return (str);
}

/**
#include <stdio.h> //TODO REMOVE

int	main(int ac, char **av)
{
	char	*ft_ret = NULL;

	if (ac != 4){
		printf("ERROR!\n");
		return (0);
	}
	ft_ret =	ft_substr(
				(const char *)av[1],
				(unsigned int)atoi(av[2]),
				(unsigned long)strtol(av[3], (char **)NULL, 10)
				);
	if (!ft_ret){
		printf("NULL!\n");
		return (0);
	}
	else
		printf	("ft_[%lu]|%s|\n",
				ft_strlen(ft_ret),
				ft_ret
		);
	return (0);
}
*/