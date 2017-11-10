/*
** EPITECH PROJECT, 2017
** CASE s
** File description:
** Case s
*/
#include "../include/my.h"

int caseS(va_list ap)
{
	char	*str = va_arg(ap, char *);

	my_putstr(str);
	return (0);
}

int caseD(va_list ap)
{
	int	nb = va_arg(ap, int);

	my_put_nbr(nb);
	return(0);
}

int caseC(va_list ap)
{
	char	c = va_arg(ap, int);

	my_putchar(c);
	return (0);
}

int caseU(va_list ap)
{
	int	nb = va_arg(ap, int);

	my_put_nbr(nb);
	return (0);
}

int caseX(va_list ap)
{
	int	nb = va_arg(ap, int);

	my_put_nbr_base(nb, "0123456789ABCDEF");
	return (0);
}
