/*
** EPITECH PROJECT, 2017
** myputnbrbaselong
** File description:
** baselong
*/
#include <unistd.h>

void my_putchar(char c);
void my_putchar(char c);
int my_strlen(char *);

long my_put_nbr_base_long(long nb, char *base)
{
	long res;
	long rest;

	if (nb < 0) {
		nb = nb * (-1);
		my_putchar('-');
	}
	res = nb / my_strlen(base);
	rest = nb % my_strlen(base);
	if (res > 0)
		my_put_nbr_base_long(res, base);
	my_putchar(base[rest]);
	return (0);
}
