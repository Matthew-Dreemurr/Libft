#include "libft.h"
#ifdef WRA
# include "wraloc.h"
#endif
#include <stdio.h>

int	main(void)
{
	printf("%d\n", charsetchar('w', "sda"));
	printf("%d\n", charsetchar('d', "sda"));
	printf("%d\n", charsetstr_strict("sdsdsdsdsdsdffsdsd", "sda"));
	printf("%d\n", charsetstr_strict("sdsdsdsdsdsdsdsd", "sda"));
	return 0;
}

/*
int	main()
{
	printf("%s", ft_strstr("ddddsdssdsdsddfadsfasdfasdfasdfasdfsadfasdfasdfasdfsdfaavvgsdfgvsgsdgfvsdgfvsdfgvsdfgsdfgvsdgfvsdgfsdvgsfgvsdfgsdfgsdfgsdfgsdfgssdfggfssgs0j9sfd8gj09sd8fgj0s9d8gj0s9dfg0sd98fgs09dfg8s09d8gf0s9d8fg0s9dfg8j90sd8g09sd8g98sjgs9gkvsfgiosjcgksfg09vugdfjgs8ugv0s9980jus89guvjs09dgujvs90dug90dsfgu8jv90sdfguvj90dgusjv9sdfuv90sduv9sujv0s9ujsu90f8vs09fjvs0du9fg8jvs090s9fdugjv0s9dfug8vjs0d9fugvj0s9dfgujv0s9dfgu8vs0d9fgvusdjfg98sudgv09s8dguvj9u80gsvju98gsvju980gvs90uj8gvsu908sgvu980jgsvu9gsvu9gv8su89j0gvsu9j80gsvuj9g8vsuj98gvsju890gsv90u8jgv09ujgsv9ju0g8gu9gu89usg90sgv90sug9vsu90gujvs9d0fgujsv0d9gusf8jsv09dfgu80s9vdugs0v9jsd9fg8udjv0g8ud09fsu8gj0v98dusgj098svugjv09sd8guv9s8gujv09s8ugj90s8guvj9sg8uvj0s9g8uvj0s9g8uvjs90g8uvj90sg8ujv09sgdujv09sgujv9sug8jv09sugj0v9us90gvj89s0fug09vsugf09sfjvsj9ugv9sgusj90fvjusg90jvusd098guvs90dguvs09dugvj09sdugjs09vjus09gujsv09fgusjv09dgusj09gvusd09fgudjsv0g98dsugj098dsguv09sdguj0s9dguv09sdugjv90sdguj90sjvg90guv9fujv90sugjv90sdujgv09sd8ugv09sud90ujgvj0sudfgv90sdjgvs9d0juv9sdjuvs0d98juv0s9dgjv09sdjuvs90djv0s9dju0s9dugjv09sdugv0sd89guv09sdug90ds8fguv09sdfug098sdguv90sfudgjv90juv09uvjugugsvugvuj908gsvju90gud8guj09d8fgjfd90gudf09gujv09d8fgjj0s9df8gdjf098ugjv98dfsug0vdf9udfs9bsuvg9sufguvj908sfdugj98bhujs90vj9usbdj098uvjds9f08ugs09qwe8ubgj90sdujv09sdugjv098dfsug90sd8gu0jcyggy0jc90af8yvgj90sdfgv9sdfjg9sd0gv098dugqwe222", "qwe"));
	return 0;
}
*/

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