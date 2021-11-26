#include "libft.h"
#include "ft_printf.h"
#ifdef WRA
# include "wraloc.h"
#endif
#include <stdio.h>


int	main()
{
	ft_printf("Test\n");
	return 0;
}

/**
int	main()
{
	char *str;

	str = ft_strdup("1");
	printf("%s\n", str);
	rev_char_arr(str, strlen_protect(str));
	printf("%s\n", str);
	return 0;
}
**/

/**

int	main()
{
	t_vector vec;

	vect_init(&vec, VEC_BUFFER_SIZE);
	printf("ret: [%d]\n" ,vect_itoa_cat(-123, &vec));
	printf("[%s]\n", vec.buff);
	return 0;
}
**/



/**
//make && gcc -I includes -I includes/debug test/main_lib.c libft.a -Wall -Wextra -Werror -g3 -fsanitize=address

int main() 
{
	t_vector vec;
	int	ret;
	ret = vect_init(&vec, VEC_BUFFER_SIZE);
	printf("[%s]\n", vec.buff);
	ret = vect_cat(&vec, "Hello");
	printf("[%d]\n", ret);
	ret = vect_push(&vec, ' ');
	printf("[%d]\n", ret);
	ret = vect_cat(&vec, "World");
	printf("[%d]\n", ret);
	ret = vect_push(&vec, '!');
	printf("[%d]\n", ret);
	printf("[%s]\n", vec.buff);
	return 0;
}
**/
/**
int	main()
{
	printf("%s", ft_itoa(9999999999999999));
	return 0;
}
**/