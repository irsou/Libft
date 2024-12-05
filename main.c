/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-s <isousa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:37:55 by isousa-s          #+#    #+#             */
/*   Updated: 2024/10/28 18:37:55 by isousa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void test_isalpha() {
    printf("ft_isalpha('a') -> Esperado: 1, Devuelto: %d\n", ft_isalpha('a'));
    printf("ft_isalpha('1') -> Esperado: 0, Devuelto: %d\n", ft_isalpha('1'));
}

void test_isdigit() {
    printf("ft_isdigit('5') -> Esperado: 1, Devuelto: %d\n", ft_isdigit('5'));
    printf("ft_isdigit('a') -> Esperado: 0, Devuelto: %d\n", ft_isdigit('a'));
}

void test_isalnum() {
    printf("ft_isalnum('a') -> Esperado: 1, Devuelto: %d\n", ft_isalnum('a'));
    printf("ft_isalnum('5') -> Esperado: 1, Devuelto: %d\n", ft_isalnum('5'));
    printf("ft_isalnum('@') -> Esperado: 0, Devuelto: %d\n", ft_isalnum('@'));
}

void test_isascii() {
    printf("ft_isascii(65) -> Esperado: 1, Devuelto: %d\n", ft_isascii(65));  // 'A'
    printf("ft_isascii(200) -> Esperado: 0, Devuelto: %d\n", ft_isascii(200));
}

void test_isprint() {
    printf("ft_isprint(32) -> Esperado: 1, Devuelto: %d\n", ft_isprint(32));  // ' '
    printf("ft_isprint(127) -> Esperado: 0, Devuelto: %d\n", ft_isprint(127));
}

void test_strlen() {
    printf("ft_strlen(\"Hola\") -> Esperado: 4, Devuelto: %zu\n", ft_strlen("Hola"));
}

void test_memset() {
    char buffer[10] = "abcdefghi";
    printf("ft_memset(buffer, 'x', 3) -> Esperado: xxxdefghi, Devuelto: ");
    ft_memset(buffer, 'x', 3);
    printf("%s\n", buffer);
}

void test_bzero() {
    char buffer[10] = "abcdefghi";
    printf("ft_bzero(buffer, 3) -> Esperado: '\\0\\0\\0defghi', Devuelto: ");
    ft_bzero(buffer, 3);
    printf("%s\n", &buffer[3]); // Imprimir desde el cuarto carácter
}

void test_memcpy() {
    char src[] = "Hello";
    char dest[10];
    ft_memcpy(dest, src, 5);
    dest[5] = '\0';
    printf("ft_memcpy(dest, src, 5) -> Esperado: Hello, Devuelto: %s\n", dest);
}

void test_memmove() {
    char buffer[] = "abcdefghi";
    ft_memmove(buffer + 3, buffer, 5);
    printf("ft_memmove(buffer+3, buffer, 5) -> Esperado: abcabcdeghi, Devuelto: %s\n", buffer);
}

void test_strlcpy() {
    char dest[10];
    size_t ret = ft_strlcpy(dest, "Hello", 10);
    printf("ft_strlcpy(dest, \"Hello\", 10) -> Esperado: Hello, Devuelto: %s, Retorno: %zu\n", dest, ret);
}

void test_strlcat() {
    char dest[20] = "Hello";
    size_t ret = ft_strlcat(dest, " World", 20);
    printf("ft_strlcat(dest, \" World\", 20) -> Esperado: Hello World, Devuelto: %s, Retorno: %zu\n", dest, ret);
}

void test_toupper() {
    printf("ft_toupper('a') -> Esperado: A, Devuelto: %c\n", ft_toupper('a'));
}

void test_tolower() {
    printf("ft_tolower('A') -> Esperado: a, Devuelto: %c\n", ft_tolower('A'));
}

void test_strchr() {
    char *res = ft_strchr("Hello World", 'W');
    printf("ft_strchr(\"Hello World\", 'W') -> Esperado: W..., Devuelto: %s\n", res);
}

void test_strrchr() {
    char *res = ft_strrchr("Hello World", 'l');
    printf("ft_strrchr(\"Hello World\", 'l') -> Esperado: ld, Devuelto: %s\n", res);
}

void test_strncmp() {
    int ret = ft_strncmp("Hello", "Hello", 5);
    printf("ft_strncmp(\"Hello\", \"Hello\", 5) -> Esperado: 0, Devuelto: %d\n", ret);
}

void test_memchr() {
    char buffer[] = "Hello World";
    char *res = ft_memchr(buffer, 'W', 11);
    printf("ft_memchr(buffer, 'W', 11) -> Esperado: W..., Devuelto: %s\n", res);
}

int main() {
   test_isalpha();
   test_isdigit();
   test_isalnum();
   test_isascii();
   test_isprint();
   test_strlen();
   test_memset();
   test_bzero();
   test_memcpy();
   test_memmove();
   test_strlcpy();
   test_strlcat();
   test_toupper();
   test_tolower();
   test_strchr();
   test_strrchr();
   test_strncmp();
   test_memchr();
    return 0;
}

