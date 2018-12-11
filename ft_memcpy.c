/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 11:46:45 by jaaaron           #+#    #+#             */
/*   Updated: 2018/10/24 12:06:31 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** copies 'n' bytes from memory area 'src' to memory area 'dst'. If 'dst'
** and 'src' overlap, behavior is undefined. Applications in which 'dst'
** and 'src' might overlap should use memmove(3) instead.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*ptr;
	char	*ptr2;

	ptr = dst;
	ptr2 = (char *)src;
	i = -1;
	while (++i < n)
		*(ptr + i) = *(ptr2 + i);
	return (dst);
}
/*
** #include <stdio.h>
**
** int main(void)
**
** {
**	char str1[] = "Hello";
**	char str2[] = "World";
**
**	puts("str1 before memcpy ");
**	puts(str1);
**
**	ft_memcpy (str1,str2,sizeof(str2));
**
**	puts("\nstr1 after memcpy ");
**	puts(str1);
**	return (0);
** }
*/
