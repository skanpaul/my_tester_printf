#include "main.h"

/* ************************************************************************** */
void test_conv_c(void)
{
	char lettre1;
	char lettre2;
	int cnt_prnt;

	lettre1 = '0';
	lettre2 = '0';
	cnt_prnt = 0;
	/* 1) print("%c", '0') ------------------------- */
	
	printf("%c", '0');
	ft_printf("%c", '0');
	
}
/*
	TEST(1, print("%c", '0'));
	TEST(2, print(" %c ", '0'));
	TEST(3, print(" %c", '0' - 256));
	TEST(4, print("%c ", '0' + 256));
	TEST(5, print(" %c %c %c ", '0', 0, '1'));
	TEST(6, print(" %c %c %c ", ' ', ' ', ' '));
	TEST(7, print(" %c %c %c ", '1', '2', '3'));
	TEST(8, print(" %c %c %c ", '2', '1', 0));
	TEST(9, print(" %c %c %c ", 0, '1', '2'));
*/
