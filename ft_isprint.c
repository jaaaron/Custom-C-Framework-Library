/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 23:28:20 by jaaaron           #+#    #+#             */
/*   Updated: 2018/11/12 18:24:47 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function test for any printing character.
** Return value - returns zero if the character tests false and
** returns non-zero if the character test true.
*/

#include "libft.h"

int		ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
