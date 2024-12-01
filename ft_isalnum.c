/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:48:41 by isousa-s          #+#    #+#             */
/*   Updated: 2024/12/01 13:28:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char *str)
{
	int		position;

	position = 0;
	while (str[position] != '\0')
	{
		if (!((str[position] >= 'a' && str[position] <= 'z')
			|| (str[position] >= 'A' && str[position] <= 'Z')
			|| (str[position] >= '0' && str[position] <= '9')))
			return (0)
		position++;
	}
	return (1);
}
