/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** printf
*/
#include "my.h"
#include "printf.h"
#include <stdio.h>

static int str_parser(char flag)
{
	int	i = 0;
	char	*str = "sdicuxXop";

	while (str[i] != flag && str[i] != '\0') {
		i++;
	}
	if (str[i] == '\0')
		return (84);
	else
		return (i);
}

static void my_init(int (*PointeursurFonction[7])(va_list ap))
{
	PointeursurFonction[0] = &caseS;
	PointeursurFonction[1] = &caseD;
	PointeursurFonction[2] = &caseD;
	PointeursurFonction[3] = &caseC;
	PointeursurFonction[4] = &caseU;
	PointeursurFonction[5] = &caseX;
	PointeursurFonction[6] = &caseX;
}

int my_printf(char const *str, ...)
{
	va_list ap;
	va_start(ap, str);
	int	(*PointeursurFonction[7])(va_list ap);
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
