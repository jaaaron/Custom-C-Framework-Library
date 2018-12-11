/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 16:30:15 by jaaaron           #+#    #+#             */
/*   Updated: 2018/11/12 23:32:37 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** compares not more than 'n' characters comparing strings rather than
** binary data, characters that appear after a '\0' character are
** not compared
*/

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && *s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (*(unsigned char*)s1 - *(unsigned char*)s2);
}
/*
** #include <stdio.h>
** int main()
** {
**	char str1[15];
**	char str2[15];
**	int ret;
**	strcpy(str1,"hello");
**	strcpy(str2,"hello");
**	ret = ft_strncmp(str1,str2,4);
**	if (ret < 0)
**	{
**		printf("str1 is less than str2");
**	} else if (ret > 0) {
**		printf("str2 is less than str1");
**	} else {
**		printf("str1 is equal to str2");
**	}
**	return (0);
** }
*/
