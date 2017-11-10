/*
** EPITECH PROJECT, 2017
** Cases2
** File description:
** Case
*/
#include "my.h"

int caseO(va_list ap)
{
	int	nb = va_arg(ap, int);

	my_put_nbr_base(nb, "01234567");
	return (0);
}
