/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-s <isousa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 20:36:40 by isousa-s          #+#    #+#             */
/*   Updated: 2024/12/15 22:02:56 by isousa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		number;

	number = 0;
	while (lst != NULL)
	{
		number++;
		lst = lst->next;
	}
	return (number);
}

/* Cuenta el número de nodos de una lista
*/