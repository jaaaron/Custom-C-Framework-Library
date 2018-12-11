/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 17:17:46 by jaaaron           #+#    #+#             */
/*   Updated: 2018/10/25 23:27:27 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** copies 'len' characters from 'src' into 'dst'. If 'src' is less then
** len characters long, the remainder of dst is filled with '\0'
** else 'dst' is not terminated
*/

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while ((i < len) && src[i])
	{
		dst[i] = src[i];
		i += 1;
	}
	while (i < len)
		dst[i++] = '\0';
	return (dst);
}
/*
** #include <stdio.h>
**
** int main()
** {
**	char str1[]= "Hello world, how are you?";
**	char str2[40];
**	char str3[40];
**
**	// copy to sized buffer (overflow safe):
**	ft_strncpy (str2,str1, sizeof(str2));
**
**	// partial copy (only 5 chars):
**	ft_strncpy (str3,str2, 5);
**	str3[5] = '\0';	// null character manually added
**
**	puts(str1);
**	puts(str2);
**	puts(str3);
**	return 0;
** }
*/
