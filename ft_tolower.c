/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 11:03:27 by jaaaron           #+#    #+#             */
/*   Updated: 2018/10/25 23:36:24 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** converts an upper-case letter to the corresponding lower-case letter
*/

#include "libft.h"

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
** #include <stdio.h>
**
** int main()
** {
**	char c;
**	printf("Enter a uppercase character to be converted to lowercase: ");
**	scanf("%c",&c);
**
**	putchar(ft_tolower(c));
**
**	return 0;
** }
*/
