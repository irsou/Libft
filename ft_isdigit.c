/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:42:02 by isousa-s          #+#    #+#             */
/*   Updated: 2024/11/28 17:42:09 by isousa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(char *str)
{
	int		position;

	position = 0;
	while (str[position] != '\0')
	{
		if (!(str[position] >= '0' && str[position] <= '9'))
			return (0);
		position++;
	}
	return (1);
}
