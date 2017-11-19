/*
** EPITECH PROJECT, 2017
** Put string
** File description:
** afficher les char
*/

#include <unistd.h>

void my_putchar(char c);

void my_putstr (char const *str)
{
	int	i = 0;

	if (str == NULL) {
		write(1, "(null)", 6);
		return;
	}
	while (str[i] != '\0') {
		my_putchar(str[i]);
		i = i + 1;
	}
}
