/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-s <isousa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 20:47:02 by marvin            #+#    #+#             */
/*   Updated: 2024/12/09 20:46:30 by isousa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static size_t	fragment_counter(char const *s, char c)
{
	int	position;
	int	frag_num;
	int in_fragment;

	position = 0;
	frag_num = 1;
	in_fragment = 0;
	ft_strtrim(s, c);
	while (s[position] != '\0')
	{
		if (s[position] == c)
			position++;
		else
		{
			in_fragment = 1;
			
		}
		position++;
	}
	return (frag_num);
}

char	**ft_split(char const *s, char c)
{
	char	**fragments;
	size_t	frag_num;
	size_t	pos;

	if (!s)
		return (NULL);
	pos = 0;
	frag_num = fragment_counter(s, c);
}

/* Returns the array of strings resulting from splitting s string into 
substrings using c char as delimiter*/
