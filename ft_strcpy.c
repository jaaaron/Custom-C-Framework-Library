/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 17:21:38 by jaaaron           #+#    #+#             */
/*   Updated: 2018/10/25 20:15:55 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** copies the string 'src' to 'dst'
*/

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*
** #include <stdio.h>
**
** int main()
** {
**	char str1[]="Hello World!";
**	char str2[]="HelloToTheWorld!";
**	char str3[40];
**	char str4[40];
**	char str5[] = "hey";
**
**	ft_strcpy(str2, str1);
**	ft_strcpy(str3, "Succesfully copied string");
**	ft_strcpy(str4, str5);
**	printf ("str1: %s\nstr2: %s\nstr3: %s\nstr4: %s\n",str1,str2,str3,str4);
**	return 0;
** }
*/
