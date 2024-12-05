/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 10:17:48 by isousa-s          #+#    #+#             */
/*   Updated: 2024/12/05 22:13:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	unsigned char	*d;
	const unsigned char	*s;

	d = (unsigned char*)dest;
	s = (const unsigned char*)src;
	if (d < s || d >= s + length)
	{
		ft_memcpy(d, s, length);
	}
	else
	{
		d = d + length;
		s = s + length;
		while (length--)
		{
			d--;
			s--;
			*d = *s;
		}
	}
	return (dest);
}
