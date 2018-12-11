/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:13:34 by jaaaron           #+#    #+#             */
/*   Updated: 2018/12/06 19:40:29 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	compares the string pointed to by s1 to the string s2
*/

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		++i;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
** #include <stdio.h>
**
** int main()
** {
**	char str1[15];
**	char str2[15];
**	int ret;
**
**	strcpy(str1, "abcdef");
**	strcpy(str2, "ABCDEF");
**
**	ret = strcmp(str1, str2);
**
**	if (ret < 0)
**	{
**		printf("str1 is less than str2");
**	} else if (ret > 0) {
**		printf("str2 is less than str1");
**	} else {
**		printf("str1 is equal to str2");
**	}
**	return 0;
**
** }
*/
