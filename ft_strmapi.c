/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:36:58 by jaaaron           #+#    #+#             */
/*   Updated: 2018/12/05 18:16:26 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function f to each character of the string passed as argument
** by giving its index as first argument to create a “fresh” new string (with
** malloc(3)) resulting from the suc- cessive applications of f.
** Param #1 - The string to map
** Param #2 - The function to apply to each character of s and its index
** Return Value - The “fresh” string created from the successive applications
** of f.
** Libc functins - malloc(3)
*/

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*new;
	unsigned int		i;

	if (s && f)
	{
		new = ft_strnew(ft_strlen(s));
		if (new == NULL)
			return (NULL);
		i = 0;
		while (s[i] != '\0')
		{
			new[i] = f(i, s[i]);
			i++;
		}
		return (new);
	}
	else
		return ((new = NULL));
}
