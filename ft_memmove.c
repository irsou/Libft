/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-s <isousa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 10:17:48 by isousa-s          #+#    #+#             */
/*   Updated: 2024/12/06 13:35:24 by isousa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (d < s || d >= s + length)
	{
		while (length--)
			*d++ = *s++;
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
