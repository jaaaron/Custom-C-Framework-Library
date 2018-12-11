/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 18:13:45 by jaaaron           #+#    #+#             */
/*   Updated: 2018/12/05 19:20:44 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a copy of the string given as
** argument without whitespaces at the beginning or at the end of the string.
** Will be considered as whitespaces the following characters ’ ’, ’\n’ and
** ’\t’. If s has no whites- paces at the beginning or at the end, the
** function returns a copy of s. If the allocation fails the function returns
** NULL.
** Param #1 - The string to be trimed.
** Return value - The "fresh" trimmed string or a copy of s.
** Libc functions - malloc(3)
*/

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	const	*end;

	if (s == NULL)
		return (NULL);
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	if (*s == '\0')
		return (ft_strnew(0));
	end = s + ft_strlen(s) - 1;
	while (*end == ' ' || *end == '\t' || *end == '\n')
		end--;
	return (ft_strsub(s, 0, (end - s + 1)));
}
