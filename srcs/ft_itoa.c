/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:30:32 by mahadad           #+#    #+#             */
/*   Updated: 2021/10/11 16:52:51 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdlib.h>

/**
 * @brief copy `src` in `dest` starting by the end of `src`
 * 
 * @param dest
 * @param src
 */
static void	revcpy(char *dest, const char *src)
{
	const char	*start;

	start = src;
	while (*src)
		src++;
	while (src-- > start)
		*dest++ = *src;
	*dest = '\0';
}

/**
 * @brief 
 * 
 * @param n The integer to convert.
 * @return  char* The string representing the integer. NULL if the
 *          allocation fails.
 *
 * index   0  1  2  3  4  5  6  7  8  9  10 11
 *        [8][4][6][3][8][4][7][4][1][2][-][\0]
 */
char	*ft_itoa(int n)
{
	char	buff[12];
	char	*str;
	size_t	nbr;

	nbr = (unsigned int []){n, -n}[n < 0];
	str = buff;
	if (nbr == 0)
		*str++ = '0';
	while (nbr > 0)
	{
		*str++ = (char)((nbr % 10) + '0');
		nbr /= 10;
	}
	*str++ = (char []){'\0', '-'}[n < 0];
	*str++ = '\0';
	str = (char *)malloc(sizeof(char) * ft_strlen(buff) + 1);
	revcpy(str, buff);
	return (str);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	setbuf(stdout, NULL);
	if (ac != 2)
	{
		printf("ERROR!\n");
		return (0);
	}
	printf("|%s|\n", ft_itoa((int)strtol(av[1], (char **)NULL, 10)));
	
}
*/