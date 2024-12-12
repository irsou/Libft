/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-s <isousa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 19:59:22 by isousa-s          #+#    #+#             */
/*   Updated: 2024/12/12 20:26:38 by isousa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))

{
	size_t	pos;
	char	*str;
	size_t	len;

	pos = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (pos < len)
	{
		str[pos] = f(pos, s[pos]);
		pos++;
	}
	str[len] = '\0';
	return (str);
}

/*
*/
