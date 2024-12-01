/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:41:43 by isousa-s          #+#    #+#             */
/*   Updated: 2024/11/28 17:41:46 by isousa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char *str)
{
    int position;

    position = 0;
    while (str[position] != '\0')
    {
        if (!((str[position] >= 'A' && str[position] <= 'Z') || (str[position] >= 'a' && str[position] <= 'z')))
            return (0);
        position++;
    }
    return (1);
}
