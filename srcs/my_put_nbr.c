/*
** EPITECH PROJECT, 2017
** MyPutNbr
** File description:
** put nbr
*/

#include <unistd.h>

void my_putchar(char c);

int my_put_nbr(int nb)
{
	if (nb < 0) {
		nb = nb * (-1);
		my_putchar('-');
	}
	if (nb > 0) {
		my_put_nbr(nb / 10);
		my_putchar(nb % 10 + '0');
	}
	return (0);
}
