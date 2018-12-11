/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 15:49:14 by jaaaron           #+#    #+#             */
/*   Updated: 2018/11/05 13:00:02 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** searches for the last occurrence of the character unsigned char 'c'
** in the string pointed to by the argument str.
*/

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char *ret;

	ret = 0;
	while (*s != '\0')
	{
		if (*s == (char)c)
			ret = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return (ret);
}
/*
** #include <stdio.h>
**
** int main()
** {
**	const char str[] = "created";
**	const char ch = 'e';
**	char *ret;
**
**	ret = ft_strrchr(str,ch);
**	printf("Searching for |%c| in |%s| we get a return value of |%s|\n",ch,str,
** ret);
**	return (0);
** }
*/
