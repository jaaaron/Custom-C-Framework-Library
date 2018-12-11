/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 20:01:35 by jaaaron           #+#    #+#             */
/*   Updated: 2018/12/06 21:24:41 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** append a copy of the null-terminated string 's2' to the end of the
** null-terminated string 's1' not more than 'n' characters from 's2'
** and then adds a terminating '\0'. The source and destination strings
** should not overlap, as the behavior is undefined.
*/

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int			i;
	int			j;

	i = 0;
	j = (int)ft_strlen(s1);
	while (*(s2 + i) && i < (int)n)
	{
		*(s1 + j) = *(s2 + i);
		i++;
		j++;
	}
	*(s1 + j) = '\0';
	return (s1);
}
/*
** #include <stdio.h>
**
** int main()
** {
**	char src[50], dest[50];
**	strcpy(src, "Hello world");
**	strcpy(dest, "Can you hear me now?");
**	ft_strncat(dest,src,15);
**	printf("Expected output : |Can you hear me now?Hello world|");
**	printf("\nYour output.... : |%s|",dest);
**	return (0);
** }
*/
