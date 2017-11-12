/*
** EPITECH PROJECT, 2017
** TASK02
** File description:
** moulinette
*/

#include <unistd.h>

char *my_strncpy(char *dest, char const *src, int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n) {
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}
