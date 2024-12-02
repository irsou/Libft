/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-s <isousa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:08:37 by isousa-s          #+#    #+#             */
/*   Updated: 2024/12/02 19:05:20 by isousa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *ptr, int value, size_t length)
{
	size_t			i;
	unsigned char	*dir;

	i = 0;
	dir = ptr;
	while (i < length)
	{
		dir[i] = (unsigned char)value;
		i++;
	}
	return (dir);
}
