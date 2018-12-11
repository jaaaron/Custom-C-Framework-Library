/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 19:33:11 by jaaaron           #+#    #+#             */
/*   Updated: 2018/11/08 19:22:27 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the character c to the standard output.
** Param #1 - The character to output.
** Return value - None.
** Libc functions - write(2).
*/

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
