/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 10:46:00 by jaaaron           #+#    #+#             */
/*   Updated: 2018/10/25 23:37:57 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** converts a lower-case letter to the corresponding upper-case letter
*/

#include "libft.h"

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
/*
** #include <stdio.h>
**
** int main()
** {
**	char c;
**	printf("Enter a lowercase character to be converted to uppercase: ");
**	scanf("%c",&c);
**
**	putchar(ft_toupper(c));
**
**	return 0;
**}
*/
