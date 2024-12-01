/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-s <isousa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 10:17:48 by isousa-s          #+#    #+#             */
/*   Updated: 2024/11/30 11:30:38 by isousa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	unsigned char	*d;
	unsigned char	*s;

	d = dest;
	s = src;
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
