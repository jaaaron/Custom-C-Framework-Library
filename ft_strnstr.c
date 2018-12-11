/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 18:49:46 by jaaaron           #+#    #+#             */
/*   Updated: 2018/11/05 17:08:59 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** locates the first occurrence of the null-terminated string 'needle' in
** the string 'haystack', where not more than 'len' characters are searched
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t j;
	size_t c;

	j = 0;
	c = 0;
	if (haystack[j] == needle[j] && haystack[j] == '\0')
		return ((char*)&haystack[j]);
	while (haystack[j])
	{
		c = j;
		while (haystack[c] == needle[c - j] && haystack[c] && c < len)
			c++;
		if (needle[c - j] == '\0')
			return ((char*)&haystack[j]);
		j++;
	}
	return (NULL);
}
/*
** #include <stdio.h>
** int main()
** {
**	const char haystack[20] = "HelloWorld";
**	const char needle[10] = "World";
**	char *ret;
**	ret = ft_strnstr(haystack, needle,10);
**	printf("The needle in a haystack is: %s\n",ret);
**	return (0);
** }
*/
