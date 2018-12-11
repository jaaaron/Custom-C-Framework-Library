/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:53:23 by jaaaron           #+#    #+#             */
/*   Updated: 2018/11/12 22:23:27 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates with malloc(3) and returns a "fresh" substring from the string
** given as argument. The substring begins at indexstart and is of size len.
** If start and lan aren't refering to a valid substring, the behavior is
** undefined. If the allocation fails, the function returns NULL.
** Param #1 - The string from which create the substring.
** Param #2 - The start index of the substring.
** Param #3 - The size of the substring.
** Return value - The substring.
** Libc functions - malloc(3)
*/

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (s)
	{
		sub = ft_strnew(len);
		if (sub == NULL)
			return (NULL);
		s = s + start;
		i = 0;
		while (i < len)
		{
			sub[i] = s[i];
			i++;
		}
		return (sub);
	}
	else
		return ((sub = NULL));
}
