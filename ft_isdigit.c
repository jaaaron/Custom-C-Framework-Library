/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 11:05:30 by jaaaron           #+#    #+#             */
/*   Updated: 2018/10/25 23:39:54 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** tests for a decimal digit character
*/

#include "libft.h"

int		ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
** #include <stdio.h>
**
** int main()
** {
**	char c;
**	c = '5';
**	printf("Result when numeric character is passed: %d", ft_isdigit(c));
**
**	c = '+';
**	printf("\nResult when non-numeric character is passed: %d", ft_isdigit(c));
**
**	printf("\nEnter a character: ");
**	scanf("%c",&c);
**
**	if (ft_isdigit(c) == 0)
**		printf("%c is not a digit.",c);
**	else
**		printf("%c is a digit.",c);
**
**	return 0;
** }
*/
