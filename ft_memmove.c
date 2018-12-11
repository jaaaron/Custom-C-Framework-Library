/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 18:29:02 by jaaaron           #+#    #+#             */
/*   Updated: 2018/10/25 15:07:27 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** copies 'len' bytes from address 'src' to address 'dst'.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*csrc;
	char	*dest;

	i = 0;
	csrc = (char *)src;
	dest = (char *)dst;
	if (csrc > dest)
		while (i < len)
		{
			*(dest + i) = *(csrc + i);
			i++;
		}
	else
		while (len-- > 0)
			*(dest + len) = *(csrc + len);
	return (dest);
}
/*
** #include <stdio.h>
**
** int main()
** {
**	char str1[] = "Hello";
**	char str2[] = "World";
**
**	puts("str1 before memmove ");
**	puts(str1);
**
**	ft_memmove (str1,str2, sizeof(str2));
**
**	puts ("\nstr1 after memmove ");
**	puts (str1);
**
**	return 0;
** }
*/
