/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 09:42:10 by isousa-s          #+#    #+#             */
/*   Updated: 2024/12/05 22:09:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t length)
{
	unsigned char	*d;
	const unsigned char	*s;

	d = (unsigned char*)dest;
	s = (const unsigned char*)src;
	while (length--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}
