/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:32:30 by jaaaron           #+#    #+#             */
/*   Updated: 2018/11/15 16:58:22 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Converts integer to string
** Allocate (with malloc(3)) and returns a “fresh” string end- ing with ’\0’
** representing the integer n given as argument. Negative numbers must be
** supported. If the allocation fails, the function returns NULL.
** Param #1 - The integer to be transformed into a string.
** Return value - The string representing the integer passed as argument
** Libc functins - mallloc(3)
*/

#include "libft.h"

char	*ft_itoa(int n)
{
	int		tmp;
	int		i;
	int		mod;
	char	*str;

	tmp = n;
	i = 1;
	mod = n < 0;
	while (tmp /= 10)
		i++;
	str = malloc((i + 1 + mod) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (mod)
		*str++ = '-';
	str += i - 1;
	*(str + 1) = '\0';
	if (n == 0)
		*str-- = '0';
	while (n)
	{
		*str-- = (n % 10) * (mod ? -1 : 1) + '0';
		n /= 10;
	}
	return (str + 1 - mod);
}
