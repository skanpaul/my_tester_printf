#include "main.h"
/* ************************************************************************** */
enum e_test
{
	essai,
	/* --------------------------------------- */
	essai_c,		essai_s,		essai_p,
	essai_d,		essai_i,		essai_u,
	essai_x_min,	essai_x_maj,	essai_perc
	/* --------------------------------------- */
};

/* ************************************************************************** */
int	main(void)
{
	enum e_test the_test;

	the_test = essai_c;

	printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n");

	switch(the_test)
	{
		case essai_x_min:	test_conv_x_min(); 		break;
		case essai_u:		test_conv_u(); 			break;
		case essai_d:		test_conv_d(); 			break;
		case essai_p:		test_conv_p(); 			break;
		case essai_s:		test_conv_s(); 			break;
		case essai_c:		test_conv_c(); 			break;
		case essai:			test_essai_printf(); 	break;
		default: break;
	}

	return (0);	
}

// ***** OBLIGATOIRE *******************************************************
// 
// 1) %c imprime un seul caractère.
// 2) %s imprime une chaîne de caractères.
// 3) %p L’argument de pointeur void * est imprimé en hexadécimal.
// 4) %d imprime un nombre décimal (base 10).
// 5) %i imprime un entier en base 10.
// 6) %u imprime un nombre décimal non signé (base 10).
// 7) %x imprime un nombre en hexadécimal (base 16).
// 8) %X imprime un nombre en hexadécimal (base 16).
// 9) %% imprime un signe de pourcentage..
// 
// 
// ***** BONUS *******************************************************
// ’-0.’ et la largeur minimale du champ avec toutes les conversions.
// Gérez tous les flags suivants : ’# +’ (oui espace est un flag valide)
/* 
 Zero or more of the following flags:

         `#'          The value should be converted to an ``alternate form''.  For c, d, i, n, p, s, and u conversions, this option
                      has no effect.  For o conversions, the precision of the number is increased to force the first character of
                      the output string to a zero.  For x and X conversions, a non-zero result has the string `0x' (or `0X' for X
                      conversions) prepended to it.  For a, A, e, E, f, F, g, and G conversions, the result will always contain a
                      decimal point, even if no digits follow it (normally, a decimal point appears in the results of those conver-
                      sions only if a digit follows).  For g and G conversions, trailing zeros are not removed from the result as
                      they would otherwise be.

         `0' (zero)   Zero padding.  For all conversions except n, the converted value is padded on the left with zeros rather than
                      blanks.  If a precision is given with a numeric conversion (d, i, o, u, i, x, and X), the 0 flag is ignored.

         `-'          A negative field width flag; the converted value is to be left adjusted on the field boundary.  Except for n
                      conversions, the converted value is padded on the right with blanks, rather than on the left with blanks or
                      zeros.  A - overrides a 0 if both are given.

         ` ' (space)  A blank should be left before a positive number produced by a signed conversion (a, A, d, e, E, f, F, g, G, or
                      i).

         `+'          A sign must always be placed before a number produced by a signed conversion.  A + overrides a space if both
                      are used.

         `'' (apostrophe)
                      Decimal conversions (d, u, or i) or the integral portion of a floating point conversion (f or F) should be
                      grouped and separated by thousands using the non-monetary separator returned by localeconv(3).
*/