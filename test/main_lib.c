#include "libft.h"
#ifdef WRA
# include "wraloc.h"
#endif
#include <stdio.h>

int main() 
{
	t_vector v;
	if (!vect_init(&v, VEC_BUFFER_SIZE))
		return (1);
	printf("[%s]\n", v.buff);
	if (!vect_cat(&v, "Hello"))
		return (1);
	if (!vect_push(&v, ' '))
		return (1);
	if (!vect_cat(&v, "World"))
		return (1);
	if (!vect_push(&v, '!'))
		return (1);
	printf("[%s]\n", v.buff);
	return 0;
}
