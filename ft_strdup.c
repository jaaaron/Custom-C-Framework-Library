/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 17:48:26 by jaaaron           #+#    #+#             */
/*   Updated: 2018/10/24 18:10:00 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** allocates sufficient memory for a copy of string 's1' returning
** a pointer.
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	if (NULL == (str = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	ft_strcpy(str, s1);
	return (str);
}
/*
** #include <stdio.h>
**
** int main()
** {
**	char src[] = "Hello World";
**
**	char *target = ft_strdup(src);
**
**	printf("%s",src);
**	return 0;
** }
*/
