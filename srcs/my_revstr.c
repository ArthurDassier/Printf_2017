/*
** EPITECH PROJECT, 2017
** TASK03
** File description:
** reverse
*/

int my_strlen_evil(char const *str)
{
	int 	i;

	i = 0;
	while (str[i] != '\0') {
		i = i + 1;
	}
	return (i);
}

char *my_revstr(char *str)
{
	int	i;
	int	j;
	char	box;

	i = 0;
	j = my_strlen_evil(str) - 1;
	while (i < (my_strlen_evil(str)) / 2) {
		box = str[i];
		str[i] = str[j];
		str[j] = box;
		i = i + 1;
		j = j- 1;
	}
	return (str);
}
