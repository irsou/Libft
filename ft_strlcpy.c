/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-s <isousa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 10:33:09 by isousa-s          #+#    #+#             */
/*   Updated: 2024/12/06 09:11:33 by isousa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	src_len;
	size_t	pos;

	src_len = 0;
	pos = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (dest_size == 0)
		return (src_len);
	while (pos < dest_size - 1 && src[pos] != '\0')
	{
		dest[pos] = src[pos];
		pos++;
	}
	dest[pos] = '\0';
	return (src_len);
}
