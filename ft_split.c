/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 20:47:02 by marvin            #+#    #+#             */
/*   Updated: 2024/12/10 22:36:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fill_fragments_arr(char *s, size_t start, size_t len)
{
	char	*fragment;

	fragment = malloc(len +1);
	if (!fragment)
		return (NULL);
	ft_memcpy(fragment, s + start, len);
	fragment[len] = '\0';
	return (fragment);
}

static void	get_fragment(char *s, char c, char **fragments)
{
	size_t	pos;
	size_t	start;
	size_t	frag_id;

	pos = 0;
	start = 0;
	frag_id = 0;
	while (s[pos] != '\0')
	{
		if (s[pos] != c && (pos == 0 || s[pos - 1] == c))
			start = pos;
		if (s[pos] != c && (s[pos + 1] == '\0' || s[pos + 1] == c))
		{
			fragments[frag_id] = fill_fragments_arr(s, start, pos - start + 1);
			if (!fragments[frag_id])
			{
				while (frag_id > 0)
					free(fragments[frag_id--]);
				return ;
			}
			frag_id++;
		}
		pos++;
	}
}

static size_t	fragment_counter(char const *s, char c)
{
	size_t	pos;
	size_t	frag_num;

	pos = 0;
	frag_num = 0;
	while (s[pos] != '\0')
	{
		if (s[pos] != c && (pos == 0 || s[pos -1] == c))
			frag_num++;
		pos++;
	}
	return (frag_num);
}

char	**ft_split(char const *s, char c)
{
	char	**fragments;
	size_t	frag_num;

	if (!s)
		return (NULL);
	frag_num = fragment_counter(s, c);
	fragments = malloc(sizeof(char *) * (frag_num + 1));
	if (!fragments)
		return (NULL);
	get_fragment((char *)s, c, fragments);
	fragments[frag_num] = NULL;
	return (fragments);
}

/* Returns the array of strings resulting from splitting s string into 
substrings using c char as delimiter*/
