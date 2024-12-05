/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-s <isousa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 19:24:57 by isousa-s          #+#    #+#             */
/*   Updated: 2024/12/02 20:20:26 by isousa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t position;
	unsigned char *ptr = (unsigned char *)s;

	position = 0;
	while ( position < n)
	{
		if ( ptr[position] == c)
			return ((void *)ptr + position);
		position++;
	}
	return (NULL);
}