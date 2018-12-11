/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 12:31:35 by jaaaron           #+#    #+#             */
/*   Updated: 2018/11/12 18:57:50 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** copies bytes from string 'src' to 'dst'. when character unsigned char 'c'
** matches string 'src', the copy stops and a pointer to the byte after the
** copy of c in the string 'dst' is returned. Else n bytes are copied and a
** NULL pointer is returned
*/

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*ptr;
	size_t	i;

	i = -1;
	ptr = dst;
	while (++i < n)
	{
		*(ptr + i) = *((unsigned char *)src + i);
		if (*((unsigned char *)src + i) == (unsigned char)c)
			return (dst + i + 1);
	}
	return (NULL);
}
/*
** #include <memory.h>
** #include <stdio.h>
**
** char string1[60] = "Hello World is a historic monument in Coding.";
**
** int main( void ) {
**
**   char buffer[61];
**   char *pdest;
**   printf( "Function: memccpy 42 characters or to character 'c'\n" );
**   printf( "Source: %s\n", string1 );
**   pdest = memccpy( buffer, string1, 'c', 42);
**   *pdest = '\0';
**   printf( "Result: %s\n", buffer );
**   printf( "Length: %d characters\n", strlen( buffer ) );
** }
*/
