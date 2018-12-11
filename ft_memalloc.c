/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 12:52:49 by jaaaron           #+#    #+#             */
/*   Updated: 2018/11/05 12:56:48 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** allocates with malloc and returns a fresh memory area. The memory
** allocated is initialized to '0'. If the allocation fails, the function
** returns NULL.
*/

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;

	if ((mem = malloc(size)) == NULL)
		return (NULL);
	else
		return (ft_memset(mem, 0, size));
}
