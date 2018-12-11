/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:26:35 by jaaaron           #+#    #+#             */
/*   Updated: 2018/11/12 11:37:09 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** locates the first occurrence of the null-terminated string 'needle'
** in the null-terminated string 'hatstack'
*/

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (haystack[i] == needle[i] && haystack[i] == '\0')
		return ((char*)&haystack[i]);
	while (haystack[i])
	{
		j = i;
		while (haystack[j] == needle[j - i] && haystack[j])
			j++;
		if (needle[j - i] == '\0')
			return ((char*)&haystack[i]);
		i++;
	}
	return (NULL);
}
/*
** #include <stdio.h>
** int main()
** {
**	const char haystask[20] = "HelloWorld";
**	const char needle[10] = "World";
**	char *ret;
**	ret = ft_strstr(haystack,needle);
**	printf("The needle in a haystack is: %s\n",ret);
**	return (0);
** }
*/
