/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 17:45:55 by jaaaron           #+#    #+#             */
/*   Updated: 2018/12/06 22:42:40 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** converts the argument 'str' to an integer
*/

#include "libft.h"

int				ft_atoi(const char *str)
{
	int		v;
	int		n;

	v = 0;
	n = 0;
	while (*str >= 9 && *str <= 13 | *str == 32)
		str++;
	if (*str == '-')
		v = 1;
	if (*str == '+' | *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		n *= 10;
		n += (*str++ - '0');
	}
	if (v == 1)
		return (-n);
	else
		return (n);
}
/*
** #include <stdio.h>
** int main()
** {
**	char str[] = "89789";
**	char str2[] = "!@#$%^&*";
**	char str3[] = "hello";
**	int val = ft_atoi(str);
**	printf ("%d",val);
**	return (0);
** }
*/
