#include "main.h"
/* ************************************************************************** */
void test_conv_x_min(void)
{
	int cnt_prnt;

	cnt_prnt = 0;

	cnt_prnt = printf(" %x %x %lx %lx %lx %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("OFFICIAL: cnt_prnt %d\n", cnt_prnt);

	cnt_prnt = ft_printf(" %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("PERSONAL: cnt_prnt %d\n", cnt_prnt);
}
/* 
	TEST(24, print(" %x ", LONG_MAX));
	TEST(25, print(" %x ", LONG_MIN));

	TEST(26, print(" %x ", UINT_MAX));

	TEST(27, print(" %x ", ULONG_MAX));
	TEST(28, print(" %x ", 9223372036854775807LL));
	TEST(29, print(" %x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
	
	TEST(30, print(" %x ", 42));
	TEST(31, print(" %x ", -42));
	 */

