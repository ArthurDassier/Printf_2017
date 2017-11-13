/*
** EPITECH PROJECT, 2017
** CSES3PRINTF
** File description:
** printf
*/

#include "../include/my.h"

int case_xmaj(va_list ap)
{
	int	nb = va_arg(ap, int);

	my_put_nbr_base(nb, "0123456789ABCDEF");
	return (0);
}
