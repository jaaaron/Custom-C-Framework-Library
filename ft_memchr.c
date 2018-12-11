/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:30:00 by jaaaron           #+#    #+#             */
/*   Updated: 2018/10/28 21:33:50 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** locates the first occurrence of converted unsigned char 'c' in string s
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *p;

	p = (unsigned char*)s;
	while (n--)
		if (*p != (unsigned char)c)
			p++;
		else
			return (p);
	return (0);
}
/*
** #include <stdio.h>
**
** int main()
** {
**	char *s1 = "";
**	char *s2 = "abcdefabcdef";
**	char *s3 = "11111111111111111111";
**
**	printf("Testing ft_memchr():\nTest1...");
**	if (ft_memchr(s1, 'x', 0) == NULL)
**		printf("passed.");
**	else	printf("FAILED.");
**	printf("\nTest2...");
**	if (ft_memchr(s2, 'y', 0) == NULL)
**		printf("passed.");
**	else	printf("FAILED.");
**	printf("\nTest3...");
**	if ((char *)ft_memchr(s2, 'a', 1) - s2 == 0)
**		printf("passed.");
**	else	printf("FAILED.");
**	printf("\nTest4...");
**	if (ft_memchr(s2, 'd', 2)  == NULL)
**		printf("passed.");
**	else	printf("FAILED.");
**	printf("\nTest5...");
**	if ((char *)ft_memchr(s2, 'd', 12)  - s2 == 3)
**		printf("passed.");
**	else	printf("FAILED.");
**	printf("\nTest6...");
**	if ((char *)ft_memchr(s2, 'f', 12)  - s2 == 5)
**		printf("passed.");
**	else	printf("FAILED.");
**	printf("\nTest7...");
**	if ((char *)ft_memchr(s3, '1', 20)  - s3 == 0)
**		printf("passed.");
**	else	printf("FAILED.");
**	putchar('\n');
**
**	return 0;
** }
*/
