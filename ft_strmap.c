/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 13:35:38 by jaaaron           #+#    #+#             */
/*   Updated: 2018/11/12 22:10:36 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function f to each character of the string given as argument to
** create a “fresh” new string (with malloc(3)) resulting from the successive
** applications of f.
** Param #1 - The string to map.
** Param #2 - The function to apply to each character of s.
** Return value - The 'fresh' string created from the successive applications
** of f.
** Libc functions - malloc(3)
*/

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*new;
	unsigned int	i;

	if (s && f)
	{
		new = ft_strnew(ft_strlen(s));
		if (new == NULL)
			return (NULL);
		i = 0;
		while (s[i] != '\0')
		{
			new[i] = f(s[i]);
			i++;
		}
		return (new);
	}
	else
	{
		new = NULL;
		return (new);
	}
}
