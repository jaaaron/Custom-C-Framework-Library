/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 20:46:00 by jaaaron           #+#    #+#             */
/*   Updated: 2018/11/08 20:46:27 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the integer n to the standard output.
** Param #1 - THe integer to output.
** Return value - None.
** Libc functions - write(2)
*/

#include "libft.h"

void	ft_putnbr(int n)
{
	int	sign;

	sign = 1;
	if (n < 0)
	{
		ft_putchar('-');
		sign = -1;
	}
	if (-9 <= n && n <= 9)
	{
		ft_putchar(n * sign + '0');
	}
	else
	{
		ft_putnbr((n / 10) * sign);
		ft_putnbr((n % 10) * sign);
	}
}
