/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:21:03 by jaaaron           #+#    #+#             */
/*   Updated: 2018/11/06 11:43:04 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a “fresh” string end- ing with ’\0’.
** Each character of the string is initialized at ’\0’. If the allocation
** fails the function returns NULL.
** Param #1 - The size of the string to be allocated.
** Return Value - The string allocated and initialized to 0
** Libc functions - malloc(3)
*/

#include "libft.h"

char		*ft_strnew(size_t size)
{
	return ((char *)ft_memalloc(sizeof(char) * (size + 1)));
}
