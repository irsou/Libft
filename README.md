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
• ft_calloc
• ft_strdup

Funciones adicionales:
• ft_substr.c
• ft_strjoin.c
• ft_strtrim
• ft_split
ft_itoa
ft_strmapi
ft_striteri
ft_putchar_fd
ft_putstr_fd
ft_putendl_fd
ft_putnbr_fd

Funciones bonus:
ft_lstnew
ft_lstadd_front
ft_lstsize
ft_lstlast
ft_lstadd_back
ft_lstdelone
ft_lstclear
ft_lstiter
ft_lstmap


Funciones adicionales:
ft_substr

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




Enlaces de interés:
- https://github.com/42School/norminette
- https://github.com/xicodomingues/francinette
- https://github.com/ander-vieira/42zeus
	* Si zeus no detecta el name libft.a cambiar secuencia fin de línea a lf (git config core.autocrlf input)
