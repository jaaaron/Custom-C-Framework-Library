/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 17:11:17 by jaaaron           #+#    #+#             */
/*   Updated: 2018/11/14 13:09:02 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** searches for the first occurrence of the character unsigned char 'c'
** in the string pointed to by the argument str
*/

char		*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != (char)c)
	{
		s++;
	}
	if (*s != (char)c)
		return (NULL);
	else
		return ((char*)s);
}

/*
** #include <stdio.h>
**
** int main () {
**   const char str[] = "james";
**   const char ch = 'm';
**   char *ret;
**
**   ret = ft_strchr(str, ch);
**
** printf("Searching for |%c| in |%s| we get a return value of |%s|\n",
** ch, str, ret);
**
**   return(0);
** }
*/
/*
** the return value will ignore characters until a match is =
** .. including all proceding
** characters, if no match NULL will be dispalyed
*/
