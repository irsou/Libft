/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:00:49 by isousa-s          #+#    #+#             */
/*   Updated: 2024/12/01 13:37:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(char *str)
{
	int		position;

	position = 0;
	while (str[position] != '\0')
	{
		if (!(str[position] >= 32 && str[position] <= 126))
			return (0);
		position++;
	}
	return (1);
}
