/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 19:38:53 by jaaaron           #+#    #+#             */
/*   Updated: 2018/11/08 19:54:29 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the string s to the standard output.
** Param #1 - The string to output.
** Return value - None.
** Libc functions - write(2).
*/

#include "libft.h"

void	ft_putstr(char const *s)
{
	int	i;

	i = 0;
	if (!*s)
		return ;
	else
		while (s[i])
			ft_putchar(s[i++]);
}
