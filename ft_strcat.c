/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 16:24:52 by jaaaron           #+#    #+#             */
/*   Updated: 2018/11/12 19:47:31 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** append a copy of the null-terminated string 's2' to the end of the
** null-terminated string s1, then add a terminating '\0'. 's1' must
** have sufficient space to hold the result
*/

#include "libft.h"

char		*ft_strcat(char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
** #include <stdio.h>
**
** int main()
** {
**	char src[50], dest[50];
**	strcpy(src, "This is source");
**	strcpy(dest, "This is destination");
**	ft_strcat(dest, src);
**	printf("Final destination string : |%s|", dest);
**	return (0);
** }
*/
