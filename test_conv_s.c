#include "main.h"

/* ************************************************************************** */

void test_conv_s(void)
{
	// char *mot1 = "arnold et ";
	// char *mot1 = NULL;
	// char *mot2 = "willy";
	int cnt_prnt;

	cnt_prnt = 0;
	/* 1) print("%c", '0') ------------------------- */
	

	// TEST(10, print(" NULL %s NULL ", NULL));

	cnt_prnt = printf("%s\n\n", NULL);
	printf("OFFICIAL: cnt_prnt %d\n", cnt_prnt);
	cnt_prnt = ft_printf("%s\n", NULL);
	printf("PERSONAL: cnt_prnt %d\n", cnt_prnt);

	// printf("%s", mot1);
	// printf("%s", mot2);
	// ft_printf("%s", mot1);
	// ft_printf("%s", mot2);

	write(1, "\n", 1);

}

/* 	
	TEST(1, print("%s", ""));
	TEST(2, print(" %s", ""));
	TEST(3, print("%s ", ""));
	TEST(4, print(" %s ", ""));
	TEST(5, print(" %s ", "-"));
	TEST(6, print(" %s %s ", "", "-"));
	TEST(7, print(" %s %s ", " - ", ""));
	TEST(8, print(" %s %s %s %s %s", " - ", "", "4", "", s2));
	TEST(9, print(" %s %s %s %s %s ", " - ", "", "4", "", "2 "));
	TEST(10, print(" NULL %s NULL ", NULL));
 */