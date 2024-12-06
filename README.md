# Libft

Funciones de libc:

• ft_isalpha
• ft_isdigit
• ft_isalnum
• ft_isascii
• ft_isprint
• ft_strlen
• ft_memset
• ft_bzero
• ft_memcpy
• ft_memmove
• ft_strlcpy
• ft_strlcat
• ft_toupper
• ft_tolower
• ft_strchr
• ft_strrchr
• ft_strncmp
• ft_memchr
• ft_memcmp
• ft_strnstr
• ft_atoi
ft_calloc
ft_strdup

Ruta en local:
	cd /mnt/c/workspace/42/LibftDesa
Compilar librería: 
	make
	mingw32-make
	mingw32-make fclean
Ejecutar main: 
	gcc -o main main.c libft.a
	./main
Si da segmetation fault:
	gdb ./main
	(gdb) run