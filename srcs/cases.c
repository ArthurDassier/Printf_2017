/*
** EPITECH PROJECT, 2017
** CASE s
** File description:
** Case s
*/

#include "../include/my.h"

int case_s(va_list ap)
{
	char	*str;

	str = va_arg(ap, char *);
	my_putstr(str);
	return (0);
}

int case_d(va_list ap)
{
	int	nb;

	nb = va_arg(ap, int);
	my_put_nbr(nb);
	return(0);
}

int case_c(va_list ap)
{
	char	c;

	c = va_arg(ap, int);
	my_putchar(c);
	return (0);
}

int case_u(va_list ap)
{
	int	nb;

	nb = va_arg(ap, int);
	my_put_nbr(nb);
	return (0);
}

int case_x(va_list ap)
{
	int	nb;

	nb = va_arg(ap, int);
	my_put_nbr_base(nb, "0123456789abcdef");
	return (0);
}
