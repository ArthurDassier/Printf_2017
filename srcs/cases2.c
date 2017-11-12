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
	my_put_nbr_base(nb, "01234567");
	return (0);
}

int case_p(va_list ap)
{
	long	nb;

	nb = va_arg(ap, long);
	my_putstr("0x");
	my_put_nbr_base_long(nb, "0123456789abcdef");
	return (0);
}

int case_b(va_list ap)
{
	int	nb;

	nb = va_arg(ap, int);
	if (nb < 0)
		nb = nb * (-1);
	my_put_nbr_base(nb, "01");
	return (0);
}

int case_mod(va_list ap)
{
	my_putchar('%');
	return(0);
}

int case_smaj(va_list ap)
{
	char	*str;
	int i;

	i = 0;
	str = va_arg(ap, char *);
	while (str[i] != '\0') {
		if (str[i] > 32 && str[i] <= 127)
			my_putchar(str[i]);
		else {
			my_putchar('\\');
			if (str[i] <= 7)
				my_putchar('0');
			my_putchar('0');
			my_put_nbr_base(str[i], "01234567");
		}
		i++;
	}
	return (0);
}
