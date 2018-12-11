/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 00:19:39 by jaaaron           #+#    #+#             */
/*   Updated: 2018/11/10 18:10:55 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** compares the first 'n' char of the object pointed to by 's1' to the
** first 'n' characters of the object pointed to by s2.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = s1;
	p2 = s2;
	while (n--)
	{
		if (*p1 != *p2)
		{
			return (*p1 - *p2);
		}
		p1++;
		p2++;
	}
	return (0);
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
**	memcpy(str1, "abcdef", 6);
**	memcpy(str2, "ABCDEF", 6);
**
**	ret = memcmp(str1,str2,5);
**	printf("Output: ");
**	if (ret > 0) {
**		printf ("str2 is less than str1");
**	} else if (ret < 0) {
**		printf ("str1 is less than str2");
**	} else {
**		printf ("str1 is equal to str2");
**	}
**	printf("\nExpected Output 'str2 is less than str1'");
**	return (0);
** }
*/
