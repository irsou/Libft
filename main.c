/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-s <isousa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:37:55 by isousa-s          #+#    #+#             */
/*   Updated: 2024/12/06 13:22:29 by isousa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_isalpha(void)
{
	printf("ft_isalpha('a') -> Esperado: 1, Devuelto: %d\n", ft_isalpha('a'));
	printf("ft_isalpha('1') -> Esperado: 0, Devuelto: %d\n", ft_isalpha('1'));
}

void	test_isdigit(void)
{
	printf("ft_isdigit('5') -> Esperado: 1, Devuelto: %d\n", ft_isdigit('5'));
	printf("ft_isdigit('a') -> Esperado: 0, Devuelto: %d\n", ft_isdigit('a'));
}

void	test_isalnum(void)
{
	printf("ft_isalnum('a') -> Esperado: 1, Devuelto: %d\n", ft_isalnum('a'));
	printf("ft_isalnum('5') -> Esperado: 1, Devuelto: %d\n", ft_isalnum('5'));
	printf("ft_isalnum('@') -> Esperado: 0, Devuelto: %d\n", ft_isalnum('@'));
}

void	test_isascii(void)
{
	printf("ft_isascii(65) -> Esperado: 1, Devuelto: %d\n", ft_isascii(65));
	printf("ft_isascii(200) -> Esperado: 0, Devuelto: %d\n", ft_isascii(200));
}

void	test_isprint(void)
{
	printf("ft_isprint(32) -> Esperado: 1, Devuelto: %d\n", ft_isprint(32));
	printf("ft_isprint(127) -> Esperado: 0, Devuelto: %d\n", ft_isprint(127));
}

void	test_strlen(void)
{
	printf("ft_strlen(\"Hola\") -> Esperado: 4, Devuelto: %zu\n", ft_strlen("Hola"));
}

void	test_memset(void)
{
	char	buffer[10] = "abcdefghi";

	printf("ft_memset(buffer, 'x', 3) -> Esperado: xxxdefghi, Devuelto: ");
	ft_memset(buffer, 'x', 3);
	printf("%s\n", buffer);
}

void	test_bzero(void)
{
	char	buffer[10] = "abcdefghi";
	int		i = 0;

	printf("ft_bzero(buffer, 3) -> Esperado: '\\0\\0\\0defghi', Devuelto: ");
	ft_bzero(buffer, 3);
    while (i < 10)
	{
		if (buffer[i] == '\0')
			printf("\\0");
		else
			printf("%c", buffer[i]);
		i++;
	}
	printf("\n");
}

void	test_memcpy(void)
{
	char	src[] = "Hello";
	char	dest[10];

	ft_memcpy(dest, src, 5);
	dest[5] = '\0';
	printf("ft_memcpy(dest, src, 5) -> Esperado: Hello, Devuelto: %s\n", dest);
}

void	test_memmove(void)
{
	char	buffer[] = "abcdefghi";

	ft_memmove(buffer + 3, buffer, 5);
	printf("ft_memmove(buffer+3, buffer, 5) -> Esperado: abcabcdei, Devuelto: %s\n", buffer);
}

void	test_strlcpy(void)
{
	char	dest[10];
	size_t	ret = ft_strlcpy(dest, "Hello", 10);

	printf("ft_strlcpy(dest, \"Hello\", 10) -> Esperado: Hello, Devuelto: %s, Retorno: %zu\n", dest, ret);
}

void	test_strlcat(void)
{
	char	dest[20] = "Hello";
	size_t	ret = ft_strlcat(dest, " World", 20);

	printf("ft_strlcat(dest, \" World\", 20) -> Esperado: Hello World, Devuelto: %s, Retorno: %zu\n", dest, ret);
}

void	test_toupper(void)
{
	printf("ft_toupper('a') -> Esperado: A, Devuelto: %c\n", ft_toupper('a'));
}

void	test_tolower(void)
{
	printf("ft_tolower('A') -> Esperado: a, Devuelto: %c\n", ft_tolower('A'));
}

void	test_strchr(void)
{
	char	*res = ft_strchr("Hello World", 'W');

	printf("ft_strchr(\"Hello World\", 'W') -> Esperado: World, Devuelto: %s\n", res);
}

void	test_strrchr(void)
{
	char	*res = ft_strrchr("Hello World", 'l');

	printf("ft_strrchr(\"Hello World\", 'l') -> Esperado: ld, Devuelto: %s\n", res);
}

void	test_strncmp(void)
{
	int	ret = ft_strncmp("Hello", "Hello", 5);

	printf("ft_strncmp(Hello, Hello, 5) -> Esperado: 0, Devuelto: %d\n", ret);
}

void	test_memchr(void)
{
	char	buffer[] = "Hello World";
	char	*res;

	res = ft_memchr(buffer, 'W', 11);
	printf("ft_memchr(buffer, 'W', 11) -> Esperado: World, Devuelto: %s\n", res);
	res = ft_memchr(buffer, 'H', 0);
	printf("ft_memchr(buffer, 'H', 0) -> Esperado: (null), Devuelto: %s\n", res);
}

void	test_strnstr(void)
{
	char	str1[] = "Hello World";
	char	str2[] = "orl";
	char	*res;

	res = ft_strnstr(str1, str2, 11);
	printf("ft_strnstr(str1, str2, 11) -> Esperado: orld, Devuelto: %s\n", res);
	res = ft_strnstr(str1, str2, 4);
	printf("ft_strnstr(str1, str2, 11) -> Esperado: null, Devuelto: %s\n", res);
}

void	test_atoi(void)
{
	char	str1[] = " -12345aaaaa";
	char	str2[] = "adsfeeee";
	int		res;

	res = ft_atoi(str1);
	printf("ft_atoi( -12345aaaaa) -> Esperado: -12345, Devuelto: %d\n", res);
	res = ft_atoi(str2);
	printf("ft_atoi(adsfeeee) -> Esperado: 0, Devuelto: %d\n", res);
}

void	test_calloc(void)
{
	int		*arr;
	size_t	num = 5;
	size_t	size = sizeof(int);
	int		i;

	arr = (int *)ft_calloc(num, size);
	if (!arr)
	{
		printf("ft_calloc failed: NULL returned.\n");
		return;
	}
	printf("ft_calloc(5, sizeof(int)) -> Esperado: 0 0 0 0 0, Devuelto: ");
	i = 0;
	while (i < (int)num)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	free(arr);
}

void	test_strdup(void)
{
	char	str1[] = "Hello, world!";
	char	str2[] = "";
	char	*copy;

	copy = ft_strdup(str1);
	printf("ft_strdup(\"Hello, world!\") -> Esperado: \"Hello, world!\", Devuelto: \"%s\"\n", copy);
	free(copy);
	copy = ft_strdup(str2);
	printf("ft_strdup(\"\") -> Esperado: \"\", Devuelto: \"%s\"\n", copy);
	free(copy);
}

void	test_substr(void)
{
	char	str1[] = "Hello, world!";
	char	*res;

	res = ft_substr(str1, 7, 5);
	printf("ft_substr(\"Hello, world!\", 7, 5) -> Esperado: \"world\", Devuelto: \"%s\"\n", res);
	free(res);
	res = ft_substr(str1, 15, 7);
	printf("ft_substr(\"Hello, world!\", 15, 7) -> Esperado: \"\", Devuelto: \"%s\"\n", res);
	free(res);
}

void	test_strjoin(void)
{
	char	str1[] = "Hello, ";
	char	str2[] = " world!";
	char	*res;

	res = ft_strjoin(str1, str2);
	printf("ft_strjoin(\" Hello, \", \"world!\") -> Esperado: \"Hello, world!\", Devuelto: \"%s\"\n", res);
	free(res);
	res = ft_strjoin(str1, NULL);
	printf("ft_strjoin(\" Hello, \") -> Esperado: (null), Devuelto: \"%s\"\n", res);
	free(res);
}

int	main(void)
{
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
	test_strnstr();
	test_atoi();
	test_calloc();
	test_strdup();
	test_substr();
	test_strjoin();
	return (0);
}
