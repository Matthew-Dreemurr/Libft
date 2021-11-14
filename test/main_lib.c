#include "../includes/libft.h"
#ifdef WRA
# include "wraloc.h"
#endif
#include <stdio.h>

int	main()
{
	char *str;

	str = ft_strdup("1");
	printf("%s\n", str);
	rev_char_arr(str, strlen_protect(str));
	printf("%s\n", str);
	return 0;
}


/**

int	main()
{
	t_vector v;

	vect_init(&v, VEC_BUFFER_SIZE);
	printf("ret: [%d]\n" ,vect_itoa_cat(-123, &v));
	printf("[%s]\n", v.buff);
	return 0;
}
**/



/**
//make && gcc -I includes -I includes/debug test/main_lib.c libft.a -Wall -Wextra -Werror -g3 -fsanitize=address

int main() 
{
	t_vector v;
	int	ret;
	ret = vect_init(&v, VEC_BUFFER_SIZE);
	printf("[%s]\n", v.buff);
	ret = vect_cat(&v, "Hello");
	printf("[%d]\n", ret);
	ret = vect_push(&v, ' ');
	printf("[%d]\n", ret);
	ret = vect_cat(&v, "World");
	printf("[%d]\n", ret);
	ret = vect_push(&v, '!');
	printf("[%d]\n", ret);
	printf("[%s]\n", v.buff);
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