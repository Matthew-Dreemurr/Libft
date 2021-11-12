#include "libft.h"
#ifdef WRA
# include "wraloc.h"
#endif
#include <stdio.h>

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

int	main()
{
	printf("%s", ft_itoa(9999999999999999));
	return 0;
}