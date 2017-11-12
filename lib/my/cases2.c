/*
** EPITECH PROJECT, 2017
** Cases2
** File description:
** Case
*/
#include "../include/my.h"

int case_o(va_list ap)
{
	int	nb;

	nb = va_arg(ap, int);
	if (nb < 0)
		nb = nb * (-1);
	my_put_nbr_base_un(nb, "01234567");
	return (0);
}

int case_p(va_list ap)
{
	int	nb;

	nb = va_arg(ap, int);
	if (nb < 0)
		nb = nb * (-1);
	my_putstr("0x");
	my_put_nbr_base(nb, "0123456789ABCDEF");
	return (0);
}

int case_b(va_list ap)
{
	int	nb = va_arg(ap, int);

	if (nb < 0)
		nb = nb * (-1);
	my_put_nbr_base_un(nb, "01");
	return (0);
}
