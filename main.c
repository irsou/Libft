/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-s <isousa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:37:55 by isousa-s          #+#    #+#             */
/*   Updated: 2024/10/28 18:37:55 by isousa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	c;

	c = 'A';
	if (ft_isalpha(c))
		printf("%c es una letra.\n", c);
	else
		printf("%c no es una letra.\n", c);
	return (0);
}
