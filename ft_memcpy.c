/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-s <isousa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 09:42:10 by isousa-s          #+#    #+#             */
/*   Updated: 2024/11/30 11:46:16 by isousa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t length)
{
	unsigned char	*d;
	unsigned char	*s;

	d = dest;
	s = src;
	while (length--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}
