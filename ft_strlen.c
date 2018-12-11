/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 11:34:43 by jaaaron           #+#    #+#             */
/*   Updated: 2018/10/25 22:19:28 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** computes the length of the string
*/

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
/*
** #include <stdio.h>
**
** int main()
** {
**	char str1[]="Hello World";
**	printf("String 'Hello World' has %d characters.",ft_strlen(str1));
** }
*/
