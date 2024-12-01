/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 10:33:09 by isousa-s          #+#    #+#             */
/*   Updated: 2024/12/01 13:24:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
