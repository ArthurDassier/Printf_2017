/*
** EPITECH PROJECT, 2017
** ANTI-WARNING
** File description:
** mes prototypes
*/
#ifndef MYLIB_H
#define MYLIB_H
#include <stdarg.h>

void my_putchar (char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
void my_putstr (char const *str);
int my_strlen (char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
int my_strlen_evil(char const *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmen(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strnccat (char *dest, char const *src, int nb);
int my_put_nbr_base(int nb, char *base);
long my_put_nbr_base_long(long long nb, char *base);
int my_printf(char const *str, ...);
int case_s(va_list ap);
int case_d(va_list ap);
int case_c(va_list ap);
int case_u(va_list ap);
int case_x(va_list ap);
int case_o(va_list ap);
int case_p(va_list ap);
int case_b(va_list ap);
int case_smaj(va_list ap);
int case_mod(va_list ap);
int case_xmaj(va_list ap);
int my_error(char str);

#endif /* protection double declaration */
