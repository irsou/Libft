/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 19:50:22 by marvin            #+#    #+#             */
/*   Updated: 2024/12/01 19:50:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
	int pos;
	char *ptr;

	pos = 0;
	ptr = NULL;
	while (s[pos] != '\0')
	{
		if (s[pos] == (char)c)
			ptr = (char *)&s[pos];
		pos++;
	}
	if (c == '\0')
		return ((char *)&s[pos]);
	return (ptr);
}