#include "main.h"

/* ************************************************************************** */
void test_conv_d(void)
{
	int cnt_prnt;

	cnt_prnt = 0;

	cnt_prnt = printf("%d\n", 153);
	printf("OFFICIAL: cnt_prnt %d\n", cnt_prnt);

	cnt_prnt = ft_printf("%d\n", 153);
	printf("PERSONAL: cnt_prnt %d\n", cnt_prnt);
}