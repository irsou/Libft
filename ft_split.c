/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 20:47:02 by marvin            #+#    #+#             */
/*   Updated: 2024/12/08 20:47:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t	fragment_counter(char const *s, char c)
{
	int	position;
	int	frag_num;

	position = 0;
	frag_num = 1;
	ft_strtrim(s, c);
	while (s[position] != '\0')
	{
		if (s[position] == c)
			frag_num++;
		position++;
	}
	return frag_num;
}

char	**ft_split(char const *s, char c)
{
	char	**fragments;
	size_t	frag_num;
	size_t	pos;

	if (!s || !c)
		return (NULL);
	pos = 0;
	frag_num = fragment_counter(s, c);






}

/* Returns the array of strings resulting from splitting s string into 
substrings using c char as delimiter*/
