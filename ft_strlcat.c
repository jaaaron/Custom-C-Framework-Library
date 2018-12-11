/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 21:37:35 by jaaaron           #+#    #+#             */
/*   Updated: 2018/11/12 18:52:16 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** appends string 'src' to the end of 'dst'. It will append at most
** 'dstsize' - strlen(dst) - 1 characters. It will then NUL-terminate,
** unless 'dstsize' is 0 or the original 'dst' string was longer than
** 'dstsize'. If the 'src' and 'dst' strings overlap, the behavior is
** undefined.
*/

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	int			j;
	size_t		i;
	size_t		dst_len;
	size_t		src_len;

	i = ft_strlen(dst);
	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size < dst_len + 1)
		return (src_len + size);
	if (size > dst_len + 1)
	{
		while (i < size - 1)
			*(dst + i++) = *(src + j++);
		*(dst + i) = '\0';
	}
	return (dst_len + src_len);
}
/*
** #include <stdio.h>
** #include <string.h>
**
** int main()
** {
**	char src[6] = " world";
**	char dst[6] = " hello";
**
**	*src = src;
**	*dst = dst;
**	ft_strlcat(dst,src,0);
**	printf("Results are...%s",dst);
**	return (0);
** }
*/
