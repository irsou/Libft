/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-s <isousa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:56:11 by isousa-s          #+#    #+#             */
/*   Updated: 2024/11/30 11:30:02 by isousa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(char *str)
{
	int		position;

	position = 0;
	while (str[position] != '\0')
	{
		if (str[position] < 0 || str[position] > 127)
			return (0);
		position++;
	}
	return (1);
}
