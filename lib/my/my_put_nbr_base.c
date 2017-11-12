/*
** EPITECH PROJECT, 2017
** myputnbrbase
** File description:
** nbrbase
*/
#include <unistd.h>

void my_putchar(char c);
void my_putchar(char c);
int my_strlen(char *);

int my_put_nbr_base(int nb, char *base)
{
	int res;
	int rest;

	if (nb < 0) {
		nb = nb * (-1);
		my_putchar('-');
	}
	res = nb / my_strlen(base);
	rest = nb % my_strlen(base);
	if (res > 0)
		my_put_nbr_base(res, base);
	my_putchar(base[rest]);
	return (0);
}
