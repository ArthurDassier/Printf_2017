/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** printf
*/
#include "../include/my.h"
#include "../include/printf.h"
#include <stdio.h>

static int str_parser(char flag)
{
	int	i = 0;
	char	*str = "sdicuxXopbS";

	while (str[i] != flag && str[i] != '\0') {
		i++;
	}
	if (str[i] == '\0')
		return (84);
	else
		return (i);
}

static void my_init(int (*PointeursurFonction[11])(va_list ap))
{
	PointeursurFonction[0] = &case_s;
	PointeursurFonction[1] = &case_d;
	PointeursurFonction[2] = &case_d;
	PointeursurFonction[3] = &case_c;
	PointeursurFonction[4] = &case_u;
	PointeursurFonction[5] = &case_x;
	PointeursurFonction[6] = &case_x;
	PointeursurFonction[7] = &case_o;
	PointeursurFonction[8] = &case_p;
	PointeursurFonction[9] = &case_b;
	PointeursurFonction[10] = &case_s;
}

int my_printf(char const *str, ...)
{
	va_list ap;
	va_start(ap, str);
	int	(*PointeursurFonction[11])(va_list ap);
	my_init(PointeursurFonction);
	int	j;

	for (int i = 0; str[i]; i++) {
		if (str[i] != '%')
			my_putchar(str[i]);
		else {
			i++;
			j = str_parser(str[i]);
			PointeursurFonction[j](ap);
		}
	}
	va_end(ap);
	return (0);
}